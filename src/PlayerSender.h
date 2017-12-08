//
// Created by natanno4 on 06/12/17.
//

#ifndef LAST_PLAYERSENDER_H
#define LAST_PLAYERSENDER_H


#include "Player.h"
#include "Client.h"

class PlayerSender : public Player {
public:
    PlayerSender(char sign, Client *c);
    virtual Point playerMove(vector<Point> &v, Board &b);

private:
    Player *player;
    Client *client;

};


#endif //LAST_PLAYERSENDER_H
