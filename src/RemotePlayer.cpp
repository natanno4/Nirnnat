



#include "RemotePlayer.h"
#include <string.h>
RemotePlayer::RemotePlayer(Client* c, char sig) : client(c), Player(sign) {}


Point RemotePlayer::playerMove(vector<Point> &v, Board &b) {
    char *data = client->readFromServer();
    cout << data[0] << " blaalala " << data[2] << endl;
    if (strcmp(data, "NO MOVE") != 0) {
        int x = data[0] - '0';
        int y = data[2] - '0';
        Point pnt(x, y);
        cout << pnt.getX() << "  alitiii" << pnt.getY() << endl;
        b.putSign(pnt.getX(), pnt.getY(), getSign());
        return pnt;
    }
    Point p(10, 10);
    return p;
}