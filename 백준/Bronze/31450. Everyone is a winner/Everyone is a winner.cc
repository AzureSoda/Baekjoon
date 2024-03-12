#include <iostream>
using namespace std;

int main() {
    long long M, K;
    cin >> M >> K;

    if (M % K == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
