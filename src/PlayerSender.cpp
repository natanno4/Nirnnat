//
// Created by natanno4 on 06/12/17.
//

#include "PlayerSender.h"
#include "StandardPlayer.h"


PlayerSender::PlayerSender(char sign, const char *serverIP, int serverPort) : Player(sign) {
    player = new StandardPlayer(sign);
    client = new Client(serverIP, serverPort);

}

Point PlayerSender::playerMove(vector<Point> &v, Board &b) {
    char buffer[15];
    Point p = player->playerMove(v, b);
    client.sendPoint()
}