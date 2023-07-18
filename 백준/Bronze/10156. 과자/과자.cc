#include <iostream>
using namespace std;

int main() {
    int K, N, M;
    cin >> K >> N >> M;

    int cost = K * N;
    int result = cost - M;

    if (result > 0) {
        cout << result << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
