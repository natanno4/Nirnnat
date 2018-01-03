//
// Created by natanno4 on 27/12/17.
//


#include "ClientHandler.h"
struct cmd {
    CommandsManager *mng;
    int sock;
};

ClientHandler::ClientHandler(CommandsManager *cManagar): commandsManager(cManagar)
{}

/**
 * handleClientCommand function.
 * the function starts a thread that handles the client command.
 * gets the command as string from the client and send it to the command
 * manager.
 */
void * handleClientCommand(void * cmnd) {
    vector<string> args;
    int counter = 0;
    char buffer[MAX_SIZE_COMMAND];
    struct cmd * command = (struct cmd *)cmnd;
    int socket = command->sock;
    //get client command
    int n = read(socket, buffer, sizeof(buffer));

    if (n == -1) {
        cout << "error in reading";
        throw "error in reading";
    }
    //convert client socket to string
    string clientSocket;
    clientSocket.push_back(socket + '0');
    args.push_back(clientSocket);
    char * token, *c;
    //get client input after command
    token = strtok(buffer, " ");
    c = token;
    while (token != NULL)
    {
        if(counter > 0) {
            args.push_back(token);
        }
        token = strtok (NULL, " ");
        counter++;
    }
    //execute command
    command->mng->executeCommand(c, args);
    free(command);
}

void ClientHandler::handleClient(int socket) {
    struct cmd* c = (struct cmd*)malloc(sizeof(struct cmd*));
    c->mng = commandsManager;
    c->sock = socket;
    pthread_t pthread;
    threads.push_back(pthread);
    int length = threads.size();
    //create thread for client command.
    int rc = pthread_create(&threads[length - 1], NULL, handleClientCommand, (void *)c);

    if (rc) { cout << "Error: unable to create thread, " << rc << endl;
        exit(-1);
    }

}


void ClientHandler::closeAllClients() {
    //close threads in list.
    for (vector<pthread_t>::iterator it = threads.begin();
            it != threads.end(); it++) {
        pthread_cancel(*it);
    }
    vector<string> args;
    //close sockets in games.
    commandsManager->executeCommand("closeSockets", args);

}


