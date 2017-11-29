//
// Created by nir on 27/11/17.
//

#ifndef ASS3_STANDARDPLAYER_H
#define ASS3_STANDARDPLAYER_H


#include "Player.h"

class StandardPlayer : public Player {
public:

    /**
     * StandardPlayer function - creates a standard player.
     *
     * @param sign - the player sign.
     */
    StandardPlayer(char sign);

    virtual Point playerMove(vector<Point> &v, Board& b);

    /**
     * StandardPlayer function - destructor.
     *
     *
     */
    virtual ~StandardPlayer();
};


#endif //ASS3_STANDARDPLAYER_H
