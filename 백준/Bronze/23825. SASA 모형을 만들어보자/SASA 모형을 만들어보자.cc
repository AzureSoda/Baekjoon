#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int cnt = min(N / 2, M / 2);
    cout << cnt << endl;

    return 0;
}
