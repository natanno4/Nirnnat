#include <iostream>
#include "Server.h"
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
    string port;
    ifstream in;
    in.open("server_settings.txt");
    if (!in.is_open()) {
        return -1;
    }
    getline(in, port);
    const char* portStr = port.c_str();
    int n = atoi(portStr);
    in.close();
    ////////////////////
    Server server(n);
    try {
        server.start();
    } catch (const char* msg) {
        cout << "cannot start the server because: " << msg << endl;
        exit(-1);
    }
}