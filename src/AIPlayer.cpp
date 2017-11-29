//
// Created by natan furer 204594428
//

#include "AIPlayer.h"
#include <map>
#include <algorithm>


AIPlayer::AIPlayer(char sign): Player(sign) {
}

Point AIPlayer::playerMove(vector<Point> &v, Board &b) {
    int score, enemyHighestScore = 0;
    map<int , Point> enemyHighScores;
    Board copyBoard(b.getSize()), enemyBoard(b.getSize());
    vector<int> scores;
    GameLogic * game = new StandardLogic();
    vector<Point> enemyPossibleMoves;
    //play AI move with each point in the vector.
    for (vector<Point>::iterator it = v.begin(); it != v.end(); it ++) {
        //copy the current board.
        copyBoard = b;
        //play AI move with point
        game->applyMoveWithGivenPoint(copyBoard,*it, getSign());
        enemyPossibleMoves = game->possiblePoints(copyBoard, 'X');
        //sum the competitor score for his possible moves.
        for (vector<Point>::iterator iter = enemyPossibleMoves.begin();
             iter != enemyPossibleMoves.end(); iter ++) {
            enemyBoard = copyBoard;
            game->applyMoveWithGivenPoint(enemyBoard,*iter, 'X');
            score = (enemyBoard).getNumberOfX() - (enemyBoard).getNumberOfO();
            if (score > enemyHighestScore) {
                //keep the highest score.
                enemyHighestScore = score;
            }
        }
        scores.push_back(enemyHighestScore);
        enemyHighScores[enemyHighestScore] = *it;
    }
    //sort scores.
    sort(scores.begin(), scores.end());
    delete(game);
    //return the point that would lead to the competitor lowest score.
    return enemyHighScores[*(scores.begin())];


}


