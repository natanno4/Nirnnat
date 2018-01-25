cmake_minimum_required(VERSION 3.8)
project(server)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -pthread)

set(SOURCE_FILES main.cpp Server.cpp Server.h Command.h CommandsManager.cpp CommandsManager.h GameRooms.cpp GameRooms.h ClientHandler.cpp ClientHandler.h StartCommand.cpp StartCommand.h ListGamesCommand.cpp ListGamesCommand.h JoinCommand.cpp JoinCommand.h GameManager.cpp GameManager.h CloseClientsSocketsCommand.cpp CloseClientsSocketsCommand.h  ThreadPool.cpp ThreadPool.h Task.h)
add_executable(server ${SOURCE_FILES} Server.cpp Server.h Command.h ClientHandler.cpp ClientHandler.h StartCommand.cpp StartCommand.h ListGamesCommand.cpp ListGamesCommand.h JoinCommand.cpp JoinCommand.h GameManager.cpp GameManager.h)