#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    // N!의 마지막 숫자를 미리 저장
    int last_digits[11] = {1, 1, 2, 6, 4, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << last_digits[N] << endl;
    }

    return 0;
}
