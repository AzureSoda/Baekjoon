#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min_pos = 100, max_pos = -1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            min_pos = min(min_pos, x);
            max_pos = max(max_pos, x);
        }
        cout << (max_pos - min_pos) * 2 << '\n';
    }
    return 0;
}
