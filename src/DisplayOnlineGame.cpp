//
// Created by natanno4 on 07/12/17.
//

#include "DisplayOnlineGame.h"
#include "ConsoleDisplay.h"

DisplayOnlineGame::DisplayOnlineGame(bool myTurn) : GameDisplay() {
    gameDisplay = new ConsoleDisplay();
    sendersTurn = myTurn;
}

void DisplayOnlineGame::displayGame(Board &b, vector<Point> v,
                                    Player *player, Player *lastTurn) {

    if (sendersTurn) {
        gameDisplay->displayGame(b, v, player, lastTurn);
        sendersTurn = false;
        return;
    }
    b.print();
    cout << "waiting for other player's move ..." << endl;
    sendersTurn = true;
}