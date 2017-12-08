



#include "RemotePlayer.h"
#include <string.h>
RemotePlayer::RemotePlayer(Client* c, char sig) : client(c), Player(sign) {}


Point RemotePlayer::playerMove(vector<Point> &v, Board &b) {
    char *data = client->readFromServer();
    if (strcmp(data, "NO MOVE") != 0) {
        int x = data[1] - '0';
        int y = data[3] - '0';
        Point pnt(x, y);
        b.putSign(pnt.getX(), pnt.getY(), getSign());
        return pnt;
    }
    Point p(10, 10);
    return p;
}