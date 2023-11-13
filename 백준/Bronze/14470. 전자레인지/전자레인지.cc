#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int total_time = 0;

    if (A < 0) {
        total_time += -A * C + D; 
        A = 0; 
    }

    if (B > A) {
        total_time += (B - A) * E;
    }

    cout << total_time;

    return 0;
}
