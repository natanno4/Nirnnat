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
    string sendPoint(string str);
    char* readFromServer();
    void writeToServer(char* data);
private:
    const char *serverIP;
    int serverPort;
    int clientSocket;
};


#endif //LAST_CLIENT_H
