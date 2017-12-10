#include "Server.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <stdio.h>

#define MAX_BUFFER 10

using namespace std;
#define MAX_CONNECTED_CLIENTS 10

Server::Server(int port) : port(port), serverSocket(0) {}

void Server::start() {
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        throw "error opening socket";
    }

    struct sockaddr_in serverAddress;
    bzero((void *) &serverAddress, sizeof(serverAddress));
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(port);
    if (bind(serverSocket, (struct sockaddr *) &serverAddress, sizeof(serverAddress)) == -1) {
        throw "Error On Binding";
    }
    listen(serverSocket, MAX_CONNECTED_CLIENTS);

    struct sockaddr_in clientAddress;
    socklen_t clientAddressLen;

    struct sockaddr_in clientAddress2;
    socklen_t clientAddressLen2;
    while (true) {
        cout << "wating for client connections" << endl;

        int clientSocket = accept(serverSocket, (struct sockaddr *) &clientAddress, &clientAddressLen);
        int clientSocket2 = accept(serverSocket, (struct sockaddr *) &clientAddress2, &clientAddressLen2);

        cout << "client connected" << endl;
        if (clientSocket == -1 || clientSocket2 == -1)
            throw "Error in accpet";
        updateClients(clientSocket, clientSocket2);
        handleClient(clientSocket, clientSocket2);

        close(clientSocket);
        close(clientSocket2);
    }
}

void Server::handleClient(int socketPlayer1, int socketPlayer2) {
    int res;
    while (true) {
        res = handleOneTurn(socketPlayer1, socketPlayer2);
        if (res == 1) {
            break;
        }
        res = handleOneTurn(socketPlayer2, socketPlayer1);
        if (res == 1) {
            break;
        }
    }
}
void Server::updateClients(int clientSocket1, int clientSocket2) {
    int x = 1, o = 2, n;
    n = write(clientSocket1, &x, sizeof(x));
    if ( n == 0) {
        cout << "client disconnect" <<  endl;
        return;
    }
    if (n == -1) {
        cout << "error in writing" << endl;
        return;
    }
    n = write(clientSocket2, &o, sizeof(o));

    if ( n == 0) {
        cout << "client disconnect" <<  endl;
        return;
    }
    if (n == -1) {
        cout << "error in writing" << endl;
        return;
    }
}
int Server::handleOneTurn(int sockRead, int sockWrite) {
    int x, y;
    int n = read(sockRead, &x, sizeof(x));
    if (n == -1) {
        cout << "Error in reading x" << endl;
        return 1;
    }

    if (n == 0) {
        cout << "Client Disconnect" << endl;
        return 1;
    }
    n = read(sockRead, &y, sizeof(y));
    if (n == -1) {
        cout << "Error in reading x" << endl;
        return 1;
    }

    if (n == 0) {
        cout << "Client Disconnect" << endl;
        return 1;
    }
    ///////////
    if (x == -1 && y == -1) {
        n = write(sockWrite, &x, sizeof(x));
        n = write(sockWrite, &y, sizeof(y));
        return 1;
    }
    ///////////////////
    n = write(sockWrite, &x, sizeof(x));

    if (n == -1) {
        cout << "Error in reading x" << endl;
        return 1;
    }

    if (n == 0) {
        cout << "Client Disconnect" << endl;
        return 1;
    }

    n = write(sockWrite, &y, sizeof(y));
    if (n == -1) {
        cout << "Error in reading x" << endl;
        return 1;
    }

    if (n == 0) {
        cout << "Client Disconnect" << endl;
        return 1;
    }
    return 0;
}

void Server::stop() {
    close(serverSocket);
}