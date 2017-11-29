//
// Created by nir on 28/11/17.
//

#include "../include/AIPlayer.h"
#include <map>
#include <algorithm>


AIPlayer::AIPlayer(char sign): Player(sign) {
}

Point AIPlayer::playerMove(vector<Point> &v, Board &b) {
    int score, enemyHighestScore = 0, smallest;
    map<int , Point> enemyHighScores;
    Board copyBoard(b.getSize()), enemyBoard(b.getSize());
    vector<int> scores;
    GameLogic * game = new StandardLogic();
    vector<Point> enemyPossibleMoves;
    for (vector<Point>::iterator it = v.begin(); it != v.end(); it ++) {
        copyBoard = b;
        game->applyMoveWithGivenPoint(copyBoard,*it, getSign());
        enemyPossibleMoves = game->possiblePoints(copyBoard, 'X');
        for (vector<Point>::iterator iter = enemyPossibleMoves.begin();
             iter != enemyPossibleMoves.end(); iter ++) {
            enemyBoard = copyBoard;
            game->applyMoveWithGivenPoint(enemyBoard,*iter, 'X');
            score = (enemyBoard).getNumberOfX() - (enemyBoard).getNumberOfO();
            if (score > enemyHighestScore) {
                enemyHighestScore = score;
            }
        }
        scores.push_back(enemyHighestScore);
        enemyHighScores[enemyHighestScore] = *it;
    }
    sort(scores.begin(), scores.end());
    return enemyHighScores[*(scores.begin())];


}
