#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B; // 두 정수 A와 B를 입력받음
    
    int sum = A + B; // 두 수의 합을 계산
    int digits = 0; // 자릿수를 저장할 변수 초기화
    
    while(sum > 0) {
        digits++; // 자릿수 증가
        sum /= 10; // 다음 자릿수로 넘어감
    }
    
    cout << digits; // 계산된 자릿수 출력
    
    return 0;
}
