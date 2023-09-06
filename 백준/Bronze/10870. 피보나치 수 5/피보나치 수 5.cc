#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int fib[21]; // n은 최대 20이므로 21까지 배열을 만듭니다.

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[n] << endl;

    return 0;
}
