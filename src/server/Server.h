//
// Created by nir on 10/12/17.
//

#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H


class Server {
public:
    Server(int port);
    void start();
    void stop();
private:
    int port;
    int serverSocket;

    void handleClient(int clientSocket, int clientSocket2);
    int handleOneTurn(int sockRead, int sockWrite);
    void updateClients(int clienSocket1, int clientSocket2);
};


#endif //SERVER_SERVER_H
