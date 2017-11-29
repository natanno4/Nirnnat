//
// Created by nir on 27/11/17.
//

#include "../include/GameFlow.h"
using namespace std;


GameFlow::GameFlow(Board &b) : b(b) {
    playerX = new StandardPlayer('X');
    playerO = new StandardPlayer('O');
    logic = new StandardLogic();
    display = new ConsoleDisplay();
    turn = playerX;
    noTurn = playerX;
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
    while((!b.checkIfTableFull()) && (!noMovesX) && (!noMovesO)) {
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
                , false);
        return;
    }
    //player X won.
    if(b.getNumberOfO() < b.getNumberOfX()) {
        display->endGameDisplay(playerX, playerO,b.getNumberOfX(), b.getNumberOfO()
                , false);
        return;
    }
    //draw.
    display->endGameDisplay(playerX, playerO ,b.getNumberOfX(), b.getNumberOfO(),
                            true);

}

GameFlow::~GameFlow() {
    delete logic;
    delete playerX;
    delete playerO;
    delete display;
}
