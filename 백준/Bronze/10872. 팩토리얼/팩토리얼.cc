#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cin >> n;  // 입력 받기

    // 팩토리얼 연산
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }

    cout << fact << endl;  // 결과 출력
    return 0;
}