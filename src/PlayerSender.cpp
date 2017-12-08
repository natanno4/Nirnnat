//
// Created by natanno4 on 06/12/17.
//

#include "PlayerSender.h"
#include "StandardPlayer.h"


PlayerSender::PlayerSender(char sign, Client *c) : Player(sign) {
    player = new StandardPlayer(sign);
    client = c;

}

Point PlayerSender::playerMove(vector<Point> &v, Board &b) {
    char buffer[10];
    Point p = player->playerMove(v, b);
    buffer[0] = p.getX() + '0';
    buffer[2] = p.getY() + '0';
    buffer[1] = ',';
    client->writeToServer(buffer);
    return p;
}