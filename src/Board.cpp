/*
 * Board.cpp
 *
 * Author: natan furer 204594428
 */

#include "../include/Board.h"
#include <iostream>
using namespace std;


Board::Board(int boardSize) : size(boardSize) {
    numberOfX = 2;
    numberOfO = 2;
    board = new char*[size];
    for (int i = 0; i < size; i++) {
        board[i] = new char[size];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board[i][j] = ' ';
        }
    }
    board[3][3] = 'O';
    board[4][4] = 'O';
    board[3][4] = 'X';
    board[4][3] = 'X';

}
void Board::operator =(const Board &b) {
    numberOfX = b.getNumberOfX();
    numberOfO = b.getNumberOfO();
    size = b.getSize();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board[i][j] = b.getSign(i, j);
        }
    }
}


void Board::print() const {
    cout << " |";
    for(int j = 0; j < size; j++) {
        cout << " " << j + 1 << " |";
    }
    cout << endl;
    cout << "--";
    for(int m = 0; m < size; m++) {
        cout << "----";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "| ";
        for (int j = 0; j < size; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "--";
        for(int m = 0; m < size; m++) {
            cout << "----";
        }
        cout << endl;
    }
}

Board::~Board(){
    for (int i = 0; i < size; i++) {
        delete[] board[i];
    }
    delete[] board;
}

int Board::getSize() const {
    return size;
}

char Board::getSign(int i, int j) const {
    return board[i][j];

}

void Board::putSign(int i, int j, char s) {
    if (s == 'X') {
        if (board[i][j] == 'O') {
            numberOfX++;
            numberOfO--;
        } else {
            if (board[i][j] == ' ') {
                numberOfX++;
            }
        }
    } else {
        if (board[i][j] == 'X') {
            numberOfX--;
            numberOfO++;
        } else {
            if (board[i][j] == ' ') {
                numberOfO++;
            }
        }
    }
    board[i][j] = s;
}

int Board::getNumberOfX() const {
    return numberOfX;
}

int Board::getNumberOfO() const {
    return numberOfO;
}

bool Board::checkIfTableFull() const {
    if (size * size == numberOfX + numberOfO) {
        return true;
    }
    return false;
}