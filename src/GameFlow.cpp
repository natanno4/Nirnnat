/*
 * GameFlow.cpp
 *
 *  natan furer 204594428
 */

#include "GameFlow.h"
#include "Client.h"

using namespace std;


GameFlow::GameFlow(Board &b) : b(b) {
	logic = new StandardLogic();
	noMovesX = false;
	noMovesO = false;
}

void GameFlow::playOneTurn() {
	vector<Point> points;
	//get possible point for the current player and turn.
	points = logic->possiblePoints(b, turn->getSign());
	//display turn
	display->displayGame(b, points, turn, noTurn);
	//handle no moves situation
	if (points.empty()) {
		if (turn->getSign() == 'X') {
			noMovesX = true;
		} else {
			noMovesO = true;
		}
		return;
	} else {
		noMovesX = false;
		noMovesX = false;
	}
	//gets player point
	Point p = turn->playerMove(points, b);
	turn->setLastPlayPoint(p);
	//apply the point in the game
	logic->applyMoveWithGivenPoint(b, p, turn->getSign());
}

void GameFlow::runGame() {
	while((!b.checkIfTableFull())) {
        if ((noMovesX) && (noMovesO)) {
            break;
        }
		playOneTurn();
		//change turns
		if(turn->getSign() == 'X') {
			turn = playerO;
			noTurn = playerX;
		} else {
			turn = playerX;
			noTurn = playerO;
		}
	}
	//player O won.
	if(b.getNumberOfO() > b.getNumberOfX()) {
		display->endGameDisplay(playerO, playerX, b.getNumberOfO(), b.getNumberOfX()
				, false,b);
		return;
	}
	//player X won.
	if(b.getNumberOfO() < b.getNumberOfX()) {
		display->endGameDisplay(playerX, playerO,b.getNumberOfX(), b.getNumberOfO()
				, false, b);
		return;
	}
	//draw.
	display->endGameDisplay(playerX, playerO ,b.getNumberOfX(), b.getNumberOfO(),
			true, b);
}

void GameFlow::initializeGame(ConsoleMenu menu) {
	menu.displayMenu();
	int choice = menu.getAndCheckPLayersChoice();
	if (choice == 2) {
        display = new ConsoleDisplay();
		playerX = new StandardPlayer('X');
		playerO = new AIPlayer;
	} else if (choice == 1) {
        display = new ConsoleDisplay();
		playerX = new StandardPlayer('X');
		playerO = new StandardPlayer('O');
	} else if(choice == 3) {
        setOnlinePlayers();
        display = new DisplayOnlineGame(senderMove);
	}
	turn = playerX;
	noTurn = playerX;

}

void GameFlow::setOnlinePlayers () {
    int whichSign;
    Client client("127.0.0.1", 8073);
    client.connectToServer();
    whichSign = client.updateSign();
    if (whichSign == 1) {
        playerX = new PlayerSender('X', &client);
        playerO = new RemotePlayer(&client, 'O');
        senderMove = true;

    } else if (whichSign == 2) {
        playerO = new PlayerSender('O', &client);
        playerX = new RemotePlayer(&client, 'X');
        senderMove = false;
    }

}

GameFlow::~GameFlow() {
	delete logic;
	delete playerX;
	delete playerO;
	delete display;
}





