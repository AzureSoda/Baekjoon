#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> socks;
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        socks[num]++;
    }

    for (auto& pair : socks) {
        if (pair.second % 2 != 0) {
            cout << pair.first << '\n';
            break;
        }
    }

    return 0;
}
