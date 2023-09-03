#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // (N-1) + N * (M-1)번 쪼개면 모든 초콜릿을 1x1 크기로 쪼갤 수 있습니다.
    int minimumBreaks = (N - 1) + N * (M - 1);

    cout << minimumBreaks << endl;

    return 0;
}
