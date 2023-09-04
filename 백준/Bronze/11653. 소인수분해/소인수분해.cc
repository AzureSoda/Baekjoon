#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        // N이 1인 경우 아무것도 출력하지 않음
    } else {
        for (int i = 2; i * i <= N; i++) {
            while (N % i == 0) {
                cout << i << endl;
                N /= i;
            }
        }
        if (N > 1) {
            cout << N << endl;
        }
    }

    return 0;
}
