#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    if (T % 10 != 0) {
        cout << -1;
    } else {
        cout << T / 300 << " ";
        T = T % 300;
        cout << T / 60 << " ";
        T = T % 60;
        cout << T / 10;
    }

    return 0;
}
