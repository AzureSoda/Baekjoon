#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    // 최대로 만들 수 있는 치즈버거의 크기 계산
    int maxBurger = min(A-1, B) * 2 + 1;
    
    cout << maxBurger << endl;

    return 0;
}
