#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string K;
    
    // 입력 받기
    cin >> N;
    cin >> K;
    
    // 홀수와 짝수의 개수를 저장할 변수
    int odd_count = 0;
    int even_count = 0;
    
    // K의 각 자리 숫자에 대해 홀수인지 짝수인지 검사
    for(char digit : K) {
        if ((digit - '0') % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    // 짝수와 홀수의 개수를 비교하여 결과 출력
    if (even_count > odd_count) {
        cout << 0 << endl; // 짝짝수
    } else if (odd_count > even_count) {
        cout << 1 << endl; // 홀홀수
    } else {
        cout << -1 << endl; // 둘 다 아님
    }
    
    return 0;
}
