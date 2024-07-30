#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 코드1의 수행 횟수 계산
    // sum <- sum + A[i] × A[j];의 수행 횟수는 n-1까지의 i에 대해 i+1부터 n까지 j를 돌기 때문에
    // 총 수행 횟수는 (n-1) + (n-2) + ... + 1 = (n-1) * n / 2
    long long count = (long long)(n - 1) * n / 2;

    cout << count << endl;

    // 최고차항의 차수 계산
    // 수행 횟수는 n^2에 비례하므로 차수는 2
    cout << 2 << endl;

    return 0;
}
