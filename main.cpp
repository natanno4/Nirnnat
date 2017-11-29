#include <iostream>
#include "include/GameFlow.h"
using namespace std;

int main() {
    Board b(8);
    GameFlow g(b);
    g.runGame();
    return 0;
}