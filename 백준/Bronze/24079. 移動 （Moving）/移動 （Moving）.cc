#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // 총 이동 시간을 시간 단위로 변환합니다.
    int totalHours = X + Y;

    // Z 시간 30분 이내에 도착 가능한지 판단합니다.
    // Z 시간 30분은 Z.5 시간으로 계산할 수 있습니다.
    if (totalHours <= Z + 0.5) {
        cout << "1" << endl; // 가능한 경우
    } else {
        cout << "0" << endl; // 불가능한 경우
    }

    return 0;
}
