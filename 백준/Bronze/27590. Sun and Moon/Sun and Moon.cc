#include <iostream>
using namespace std;

int main() {
    int d_s, y_s, d_m, y_m;
    cin >> d_s >> y_s >> d_m >> y_m;
    
    int t = 0;
    while ((d_s + t) % y_s != 0 || (d_m + t) % y_m != 0) {
        t++;
    }
    
    cout << t << endl;
    return 0;
}
