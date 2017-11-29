//
// Created by nir on 27/11/17.
//

#include "../include/GameDisplay.h"
#include <iostream>
using namespace std;

GameDisplay::GameDisplay() {
    firstTurn = true;
}

void GameDisplay::endGameDisplay(Player *winner,Player * loser,
                                 int numberOfDiscsW, int numberOfDiscsL, bool draw) const {
    if (!draw) {
        cout << "no more possible moves." << endl;
        cout << "player " << winner->getSign() << " win " << endl;
    } else {
        cout << "it's a draw" << endl;
    }
    //print players scores.
    cout << "some stats:" << endl;
    cout<< winner->getSign() << " end the game with " << numberOfDiscsW
        << " discs" <<endl;
    cout<< loser->getSign() << " end the game with " << numberOfDiscsL
        << " discs" <<endl;
}

GameDisplay::~GameDisplay() {
}
