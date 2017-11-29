/*
 * main.cpp
 *
 * Author: natan furer 204594428
 */

#include "GameFlow.h"
using namespace std;

int main() {
	Board b;
	GameFlow g(b);
	ConsoleMenu menu;
	g.initializeGame(menu);
	g.runGame();
	return 0;
}



