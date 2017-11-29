//
// Created by nir on 27/11/17.
//

#ifndef ASS3_CONSOLEDISPLAY_H
#define ASS3_CONSOLEDISPLAY_H


#include <vector>
#include "Board.h"
#include "Player.h"
#include "../include/GameDisplay.h"
#include <iostream>
using namespace std;

class ConsoleDisplay : public GameDisplay {

public:

    /**
     * ConsoleDisplay function - creates ConsoleDisplay object.
     *
     */
    ConsoleDisplay();

    virtual void displayGame(Board &b, vector<Point> v, Player *player, Player *lastTurn);
    virtual ~ConsoleDisplay();

private:

    /**
     * printPlayerOption function - prints the possible points in the
     * given vector.
     *
     * @param v - the points vector.
     */
    void printPlayerOption(vector<Point> &v) const;

};


#endif //ASS3_CONSOLEDISPLAY_H
