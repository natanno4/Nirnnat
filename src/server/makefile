a.out: main.o Server.o
	g++ main.o Server.o

Server.o: Server.cpp Server.h
	g++ -c Server.cpp

main.o: main.cpp Server.h
	g++ -c main.cpp
