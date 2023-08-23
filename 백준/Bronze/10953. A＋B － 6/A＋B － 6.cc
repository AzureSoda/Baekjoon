#include <iostream>
using namespace std;

int main() {
    int T, A, B;
    char comma; // 콤마를 입력받기 위한 변수

    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> A >> comma >> B;
        cout << A+B << endl;
    }

   return 0;
}
