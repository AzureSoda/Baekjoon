#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;
    
    // 시작점과 도착점 사이의 맨해튼 거리를 계산합니다.
    int distance = abs(a - c) + abs(b - d);
    
    // 배터리의 전력이 정확히 거리만큼 남아있거나, 남은 전력으로 추가 이동 후 원래 위치로 돌아올 수 있는지 확인합니다.
    // 이 때, 남은 전력(t - distance)이 짝수여야 합니다. (왕복 이동 가능)
    if (distance <= t && (t - distance) % 2 == 0) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}
