#include <iostream>
using namespace std;

int main() {
    // 주어진 투표수를 입력받기
    int votes[5];
    for (int i = 0; i < 5; i++) {
        cin >> votes[i];
    }

    int count = 0;
    int threshold = votes[0] - 1000; // 16위 캐릭터 투표수에서 1000을 뺀 값이 기준점이 됨

    // 17위부터 20위까지의 캐릭터가 기준점 이상인지 확인
    for (int i = 1; i < 5; i++) {
        if (votes[i] >= threshold) {
            count++;
        }
    }

    // 결과 출력
    cout << count << endl;

    return 0;
}
