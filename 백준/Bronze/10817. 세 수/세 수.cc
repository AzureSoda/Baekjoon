#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int max2 = (A>=B) ? (C>=A ? A : (C>=B ? C:B)) : (C>=B ? B : (C>=A ? C:A));
    cout << max2 << endl;
    
    return 0;
}
