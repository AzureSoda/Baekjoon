#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<pair<int, string>> schools(N);

        for (int i = 0; i < N; i++) {
            cin >> schools[i].second >> schools[i].first;
        }

        sort(schools.rbegin(), schools.rend());

        cout << schools[0].second << "\n";
    }

    return 0;
}
