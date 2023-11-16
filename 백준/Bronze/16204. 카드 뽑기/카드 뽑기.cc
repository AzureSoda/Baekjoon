#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    int O = min(M,K); // 'O'를 최대한 많이 적을 수 있는 수
    int X = min(N-M, N-K); // 'X'를 최대한 많이 적을 수 있는 수

    cout << O + X << "\n"; // 'O'와 'X'가 동시에 적힌 카드의 최대 수

    return 0;
}
