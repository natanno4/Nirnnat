//
// Created by natanno4 on 07/12/17.
//

#ifndef LAST_DISPLAYONLINEGAME_H
#define LAST_DISPLAYONLINEGAME_H


#include "GameDisplay.h"

class DisplayOnlineGame : public GameDisplay {

public:
    DisplayOnlineGame(bool myTurn);
    virtual void displayGame(Board &b, vector<Point> v, Player *player, Player *lastTurn);

private:
    GameDisplay *gameDisplay;
    bool sendersTurn;
    bool firstTurn;
};


#endif //LAST_DISPLAYONLINEGAME_H
