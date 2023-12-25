#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    cin >> N >> X;

    vector<long long> prices(N);
    for(int i = 0; i < N; i++) {
        cin >> prices[i];
    }

    long long minCost = 1e18;
    for(int i = 0; i < N - 1; i++) {
        minCost = min(minCost, (prices[i] + prices[i+1]) * X);
    }

    cout << minCost << "\n";

    return 0;
}
