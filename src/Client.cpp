#include "Client.h"
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>

#include "Point.h"
using namespace std;

Client::Client(const char *serverIP, int serverPort) : serverIP(serverIP), serverPort(serverPort), clientSocket(0){}


void Client::connectToServer() {
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        throw "error opening socket";
    }

    struct in_addr address;
    if (!inet_aton(serverIP, &address)) {
        throw "can't parse ip address";
    }

    struct hostent *server;
    server = gethostbyaddr((const void*)&address, sizeof(address), AF_INET);
    if (server == NULL) {
        throw "server unreachable";
    }

    struct sockaddr_in serverAddress;
    bzero((char*)&address, sizeof(address));

    serverAddress.sin_family = AF_INET;
    memcpy((char*)&serverAddress.sin_addr.s_addr, (char*)server->h_addr, server->h_length);

    serverAddress.sin_port = htons(serverPort);

    if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
        throw "Error connecting to server";
    }
    cout << "connect to server" << endl;
}

void Client::writeToServer(char *data) {
    int n = write(clientSocket, data, sizeof(data));
    if (n == -1) {
        throw "error in writing";
    }
}

char* Client::readFromServer() {
    char* data;
    int n = read(clientSocket, data, sizeof(data));
    if (n == -1) {
        throw "error in reading";
    }
    return data;
}