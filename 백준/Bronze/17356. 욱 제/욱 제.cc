#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    double M = (B - A) / 400.0;
    double probability = 1 / (1 + pow(10, M));
    cout.precision(16);
    cout << probability << endl;
    return 0;
}
