//
// Created by nir on 28/11/17.
//

#ifndef ASS3_AIPLAYER_H
#define ASS3_AIPLAYER_H


#include "Player.h"
#include "StandardLogic.h"

class AIPlayer : public Player {
public:
    AIPlayer(char sign = 'O');
    virtual Point playerMove(vector<Point> &v, Board &b);
};


#endif //ASS3_AIPLAYER_H
