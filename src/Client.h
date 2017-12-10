//
// Created by nir on 08/12/17.
//

#ifndef LAST_CLIENT_H
#define LAST_CLIENT_H


#include "Point.h"

class Client {
public:
    Client(const char* serverIP, int serverPort);
    void connectToServer();
    char* readFromServer(int &x, int &y);
    void writeToServer(int x, int y);
    int updateSign();
private:
    const char *serverIP;
    int serverPort;
    int clientSocket;

};


#endif //LAST_CLIENT_H
