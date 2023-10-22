#include <iostream>

using namespace std;

int main() {
    int R, S;
    cin >> R >> S;
    
    // 전체 컵케이크 계산
    int totalCupcakes = R * 8 + S * 3;
    
    // 학생 수(28명)을 뺀 후 남은 컵케이크 수 출력
    cout << totalCupcakes - 28 << endl;

    return 0;
}
