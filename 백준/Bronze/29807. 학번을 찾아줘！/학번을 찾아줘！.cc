#include <iostream>
using namespace std;

int main() {
    int T;  // 응시한 과목 수
    cin >> T;

    int scores[5] = {0, 0, 0, 0, 0};  // 각 과목 점수 (국어, 수학, 영어, 탐구, 제2외국어)
    for (int i = 0; i < T; ++i) {
        cin >> scores[i];
    }

    int korean = scores[0];
    int math = scores[1];
    int english = scores[2];
    int inquiry = scores[3];
    int second_language = scores[4];

    // 국어와 영어 점수 비교
    int diff1 = abs(korean - english);
    int result1 = (korean > english) ? diff1 * 508 : diff1 * 108;

    // 수학과 탐구 점수 비교
    int diff2 = abs(math - inquiry);
    int result2 = (math > inquiry) ? diff2 * 212 : diff2 * 305;

    // 제2외국어 점수 계산
    int result3 = second_language * 707;

    // 최종 학번 계산
    int total_result = (result1 + result2 + result3) * 4763;

    cout << total_result << endl;

    return 0;
}
