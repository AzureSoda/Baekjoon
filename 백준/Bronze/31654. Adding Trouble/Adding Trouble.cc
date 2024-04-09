#include <iostream>
using namespace std;

int main() {
    // 세 정수 A, B, C를 선언합니다.
    long long A, B, C;
    
    // 표준 입력으로부터 A, B, C 값을 입력받습니다.
    cin >> A >> B >> C;
    
    // A와 B의 합이 C와 같은지 확인합니다.
    if(A + B == C) {
        // A + B = C인 경우, "correct!"를 출력합니다.
        cout << "correct!" << endl;
    } else {
        // A + B ≠ C인 경우, "wrong!"를 출력합니다.
        cout << "wrong!" << endl;
    }
    
    return 0;
}
