#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int max_prize = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a == b && b == c) {
            max_prize = max(max_prize, 10000 + a * 1000);
        } else if (a == b || a == c) {
            max_prize = max(max_prize, 1000 + a * 100);
        } else if (b == c) {
            max_prize = max(max_prize, 1000 + b * 100);
        } else {
            max_prize = max(max_prize, max(a, max(b, c)) * 100);
        }
    }

    cout << max_prize << endl;

    return 0;
}
