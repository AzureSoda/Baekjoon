#include <iostream>
using namespace std;

int main() {
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    // Calculate time to use the lift
    int liftTime = (abs(k - 1) * b) + ((n - 1) * b);

    // Calculate time to use the stairs
    int stairsTime = (n - 1) * a;

    // Output the results
    cout << liftTime << " " << stairsTime << endl;

    return 0;
}
