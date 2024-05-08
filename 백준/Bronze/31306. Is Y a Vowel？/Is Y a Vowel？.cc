#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word; // 문자열 입력 받기
    
    int vowelsWithoutY = 0; // y를 모음으로 고려하지 않을 때의 모음 수
    int vowelsWithY = 0; // y를 모음으로 고려할 때의 모음 수
    
    for (char c : word) {
        // a, e, i, o, u인 경우 항상 모음으로 카운트
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelsWithoutY++;
            vowelsWithY++;
        }
        // y인 경우에는 y를 모음으로 고려할 때만 카운트
        else if (c == 'y') {
            vowelsWithY++;
        }
    }
    
    // y를 모음으로 고려하지 않는 경우와 고려하는 경우의 모음 수 출력
    cout << vowelsWithoutY << " " << vowelsWithY << endl;
    
    return 0;
}
