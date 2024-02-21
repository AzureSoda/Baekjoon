#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sideLength = sqrt(n);
    cout << "The largest square has side length " << sideLength << ".";
    return 0;
}
