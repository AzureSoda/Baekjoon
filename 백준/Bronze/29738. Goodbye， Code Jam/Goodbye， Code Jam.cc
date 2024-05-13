#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;
        string rnd = "Round 1";
        
        if (N <= 25) {
            rnd = "World Finals";
        } else if (N <= 1000) {
            rnd = "Round 3";
        } else if (N <= 4500) {
            rnd = "Round 2";
        }
        
        cout << "Case #" << i+1 << ": " << rnd << endl;
    }
    return 0;
}
