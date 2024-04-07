#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M; // 시간과 분을 입력받음
    cout << H * 60 + M; // 총 분으로 환산하여 출력
    return 0;
}
