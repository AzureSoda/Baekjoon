#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double a;
    cin >> a;

    long double r = sqrt(a / M_PI);
    long double perimeter = 2 * M_PI * r;

    cout.precision(10);
    cout << fixed << perimeter << '\n';

    return 0;
}
