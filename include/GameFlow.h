//
// Created by nir on 27/11/17.
//

#ifndef ASS3_GAMEFLOW_H
#define ASS3_GAMEFLOW_H


#include "Board.h"
#include "StandardLogic.h"
#include "ConsoleDisplay.h"
#include "StandardPlayer.h"

class GameFlow {
public:

    /**
     * GameFlow function - creates a game flow object.
     * runs the game
     *
     *@param b the game board.
     */
    GameFlow(Board &b);

    /**
     * playOneTurn function - runs one turn- logic + display.
     *
     */
    void playOneTurn();

    /**
     * runGame function - runs the game.
     * changes turns.
     * checks who wins.
     *
     */
    void runGame();

    /**
     * GameFlow function - desructor.
     *
     */
    ~GameFlow();

private:
    Player * turn;
    Player * playerX;
    Player * playerO;
    GameLogic * logic;
    GameDisplay * display;
    Player* noTurn;
    Board & b;
    bool noMovesX;
    bool noMovesO;
};


#endif //ASS3_GAMEFLOW_H
