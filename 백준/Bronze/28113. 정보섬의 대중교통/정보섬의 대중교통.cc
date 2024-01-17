#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    if (A < N) { // 버스를 더 빨리 탈 수 있는 경우
        cout << "Bus" << endl;
    } else if (B < N) { // 지하철을 더 빨리 탈 수 없는 경우
        cout << "Subway" << endl;
    } else { // 버스와 지하철을 같은 시간에 탈 수 있는 경우
        cout << (A < B ? "Bus" : (B < A ? "Subway" : "Anything")) << endl;
    }

    return 0;
}
