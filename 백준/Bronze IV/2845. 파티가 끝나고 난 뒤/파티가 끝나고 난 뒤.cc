#include <iostream>
using namespace std;

int main() {
    int L, P, num;
    cin >> L >> P;
    
    int realNum = L * P;
    
    for(int i=0; i<5; i++){
        cin >> num;
        cout << num - realNum << " ";
    }
    
    return 0;
}
