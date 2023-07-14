#include <iostream>
using namespace std;

int main() {
    int T, A, B;
    
    // 테스트 케이스 개수 T 입력 받기
    cin >> T;
    
    for(int testCase = 0; testCase < T; ++testCase) {
        // A, B 입력 받기
        cin >> A >> B;
        
        // A+B 계산 후 출력
        cout << A + B << endl;
    }

    return 0;
}