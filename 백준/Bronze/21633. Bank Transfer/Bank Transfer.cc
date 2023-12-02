#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    long long k;
    double commission;
    cin >> k;

    commission = 25 + (double)k * 0.01;
    commission = max(commission, 100.0);
    commission = min(commission, 2000.0);
    
    cout << fixed << setprecision(2) << commission << endl;

    return 0;
}
