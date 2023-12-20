#include <iostream>
using namespace std;

int main() {
    int S, T, D;
    cin >> S >> T >> D;

    // 두 기차가 만날 때까지 걸리는 시간을 계산합니다.
    int timeUntilCollision = D / (2 * S);

    // 파리의 이동 거리를 계산합니다.
    int distanceFlownByFly = T * timeUntilCollision;

    // 파리의 총 이동 거리를 출력합니다.
    cout << distanceFlownByFly << endl;

    return 0;
}
