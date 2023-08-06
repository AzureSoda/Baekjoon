#include <iostream>

using namespace std;

int main() {
    int teaType, answerA, answerB, answerC, answerD, answerE;
    int correctAnswers = 0;
    
    cin >> teaType >> answerA >> answerB >> answerC >> answerD >> answerE;
    
    if (answerA == teaType) {
        correctAnswers++;
    }
    if (answerB == teaType) {
        correctAnswers++;
    }
    if (answerC == teaType) {
        correctAnswers++;
    }
    if (answerD == teaType) {
        correctAnswers++;
    }
    if (answerE == teaType) {
        correctAnswers++;
    }
    
    cout << correctAnswers << endl;
    
    return 0;
}
