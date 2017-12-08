//
// Created by nir on 08/12/17.
//

#ifndef LAST_REMOTEPLAYER_H
#define LAST_REMOTEPLAYER_H


#include "Player.h"
#include "Client.h"
class RemotePlayer : public Player {
public:
    RemotePlayer(Client* c, char sign);
    virtual Point playerMove(vector<Point>& v, Board &b);

private:
    Client* client;
};



#endif //LAST_REMOTEPLAYER_H
