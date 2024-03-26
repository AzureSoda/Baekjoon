#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    // 문제에서는 각 클로즈의 내용을 입력받지만, 이 문제의 해결에는 필요하지 않습니다.
    // 따라서 해당 부분은 입력을 받기만 하고 사용하지 않습니다.
    for(int i = 0; i < m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
    }
    
    // Øyvind의 판단 기준에 따라 결과를 출력합니다.
    if (m >= 8) {
        cout << "satisfactory" << endl;
    } else {
        cout << "unsatisfactory" << endl;
    }
    
    return 0;
}
