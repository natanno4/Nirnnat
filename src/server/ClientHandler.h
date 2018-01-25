//
// Created by natanno4 on 27/12/17.
//

#ifndef SERVER_CLIENTHANDLER_H
#define SERVER_CLIENTHANDLER_H

#include <pthread.h>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include "CommandsManager.h"
#include "ThreadPool.h"
#include <cstring>
#include <sstream>

using namespace std;
#define MAX_SIZE_COMMAND 60
#define THREADS_NUM 5

/**
 * ClientHandler class. responsible of handle the client's command.
 */
class ClientHandler {

public:
    /**
     * constructor.
     * receive a pointer to CommandsManager.
     * @param cManagar commandManager
     */
    ClientHandler(CommandsManager* cManagar);

    /**
     * handleClient function.
     * receive the client's socket, and create a struct that will be passed to
     * thread as argument and contains the sockert and a commandsManager. than
     * add a pointer to thread to the vector of threads and create a thread with
     * static function. the pointer that was created and the struct.
     * @param socket client's socket
     */
    void handleClient(int socket);

    /**
     * closeAllClients function.
     * called when the server stops. iterate over the vector of threads
     * and cancel each one of them.
     */
    void closeAllClients();

    ~ ClientHandler();



private:

    /**
     * CommandsManager that map each string to accord command.
     */
    CommandsManager *commandsManager;

    ThreadPool *threadPool;

    Task *task;

};


#endif //SERVER_CLIENTHANDLER_H
