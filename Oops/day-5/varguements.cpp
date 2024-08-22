#include <iostream>
#include <cstdarg>
#include <algorithm>
using namespace std;
int calculateBestScore(int numScores, ...) {
    if (numScores < 3 || numScores > 5) {
        cout << "Invalid number of scores. The number of scores should be between 3 and 5." << endl;
        return 0;
    }
    int scores[5];
    va_list args;
    va_start(args, numScores);
    for (int i = 0; i < numScores; i++) {
        scores[i] = va_arg(args, int);
    }
    va_end(args);
    sort(scores, scores + numScores);\
    int totalScore = scores[numScores - 1] + scores[numScores - 2] + scores[numScores - 3];
    return totalScore;
}
int main() {
    int numAnswers;
    cout << "Enter the number of answers provided by the student (between 3 to 5): ";
    cin >> numAnswers;
    if (numAnswers == 3) {
        int score1, score2, score3;
        cout << "Enter the scores for the three answers (out of 15 each): ";
        cin >> score1 >> score2 >> score3;
        int bestScore = calculateBestScore(numAnswers, score1, score2, score3);
        cout << "The best total score (sum of the top 3 scores) is: " << bestScore << " out of 45." << endl;
    } else if (numAnswers == 4) {
        int score1, score2, score3, score4;
        cout << "Enter the scores for the four answers (out of 15 each): ";
        cin >> score1 >> score2 >> score3 >> score4;
        int bestScore = calculateBestScore(numAnswers, score1, score2, score3, score4);
        cout << "The best total score (sum of the top 3 scores) is: " << bestScore << " out of 45." << endl;
    } else if (numAnswers == 5) {
        int score1, score2, score3, score4, score5;
        cout << "Enter the scores for the five answers (out of 15 each): ";
        cin >> score1 >> score2 >> score3 >> score4 >> score5;
        int bestScore = calculateBestScore(numAnswers, score1, score2, score3, score4, score5);
        cout << "The best total score (sum of the top 3 scores) is: " << bestScore << " out of 45." << endl;
    } else {
        cout << "Invalid number of answers. A student must answer between 3 and 5 questions." << endl;
    }
    return 0;
}
