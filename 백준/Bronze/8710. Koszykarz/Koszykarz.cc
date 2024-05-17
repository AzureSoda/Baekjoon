#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int k, w, m;
    
    // 입력 받기
    cin >> k >> w >> m;
    
    // 필요한 충격 횟수 계산
    int result = (w - k + m - 1) / m; // 올림 처리를 위한 계산
    
    // 결과 출력
    cout << result << endl;
    
    return 0;
}
