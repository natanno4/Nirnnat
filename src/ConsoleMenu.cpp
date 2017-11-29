//
// Created by natan furer 204594428
//

#include "ConsoleMenu.h"
using namespace std;

ConsoleMenu::ConsoleMenu() {

}

void ConsoleMenu::displayMenu() {
    cout << "welcome to Reversi" << endl;
    cout << "please enter 0 to play vs human player, or, 1 to"
          << "play vs AI player." << endl;
}


int  ConsoleMenu::getAndCheckPLayersChoice() {
    int choice;

    while(true) {
        //check for correct input
        while(!(cin >> choice)) {
            cin.clear();
            cin.ignore(80, '\n');
            cout << "wrong input" << endl;
            cout << "please enter 0 to play vs human player, or, 1 to"
                    << "play vs AI player." << endl;
            continue;
        }
        if (choice == 1) {
            return 1;
        } if (choice == 0) {
            return 0;
        }
        cout << "please enter 0 to play vs human player, or, 1 to"
             << "play vs AI player." << endl;
        cin.ignore(80, '\n');

    }

}
