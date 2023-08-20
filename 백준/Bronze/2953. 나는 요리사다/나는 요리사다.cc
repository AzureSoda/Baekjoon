#include <iostream>
using namespace std;

int main() {
    int scores[5][4]; // 5명의 참가자 각각 4개의 평가 점수를 저장하는 배열

    // 각 참가자의 평가 점수를 입력받음
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> scores[i][j];
        }
    }

    int maxTotalScore = 0; // 가장 높은 총 점수
    int winner = 0; // 우승자의 번호

    // 각 참가자의 총 점수를 계산하고 최고 점수를 갱신
    for (int i = 0; i < 5; ++i) {
        int totalScore = 0;
        for (int j = 0; j < 4; ++j) {
            totalScore += scores[i][j];
        }
        if (totalScore > maxTotalScore) {
            maxTotalScore = totalScore;
            winner = i + 1; // 번호는 1부터 시작하므로 +1
        }
    }

    // 결과 출력
    cout << winner << " " << maxTotalScore << endl;

    return 0;
}
