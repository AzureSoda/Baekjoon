#include <iostream>

using namespace std;

int main() {
    long long N, M; // long long 자료형 사용
    cin >> N >> M;
    cout << ((N >= M) ? N - M : M - N) << endl; // 절댓값 계산 후 출력
    return 0;
}
