#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // 지폐의 수 N을 입력받습니다.

    int total = 0; // 지폐의 총액을 저장할 변수입니다.
    for(int i = 0; i < N; i++) {
        int width, height;
        cin >> width >> height; // 각 지폐의 가로, 세로 길이를 입력받습니다.

        // 가로 길이에 따라 지폐의 종류를 구분하고, 해당 지폐의 액수를 총액에 더합니다.
        switch(width) {
            case 136: // 천 원권
                total += 1000;
                break;
            case 142: // 오천 원권
                total += 5000;
                break;
            case 148: // 만 원권
                total += 10000;
                break;
            case 154: // 오만 원권
                total += 50000;
                break;
        }
    }

    cout << total; // 계산된 총액을 출력합니다.

    return 0;
}