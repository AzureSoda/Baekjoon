#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // 사용자로부터 전체 줄 수 N을 입력받음

    for(int i = 0; i < N; i++) { // 각 줄에 대하여
        for(int j = 0; j < i; j++) { // 해당 줄 번호만큼 공백을 출력
            cout << " ";
        }
        for(int j = i; j < N; j++) { // 그 이후에 (N-해당 줄 번호)만큼 별을 출력
            cout << "*";
        }
        cout << "\n"; // 줄바꿈
    }

    return 0;
}
