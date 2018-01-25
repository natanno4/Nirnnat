//
// Created by natanno4 on 20/01/18.
//

#ifndef SERVER_THREADPOOL_H
#define SERVER_THREADPOOL_H
#include"Task.h"
#include<queue>
#include<pthread.h>

using namespace std;


class ThreadPool {
    public:
        ThreadPool(int threadsNum);
        void addTask(Task *task);
        void terminate();
        virtual~ThreadPool();
    private:
        queue<Task *> tasksQueue;
        pthread_t * threads;
        void executeTasks();
        bool stopped;
        pthread_mutex_t lock;
        static void *execute(void *arg);


};


#endif //SERVER_THREADPOOL_H
