#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string letters;
    cin >> letters;

    // 알파벳 전체 집합 생성
    string full_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // 입력된 문자열에서 각 문자의 존재 여부를 확인
    for (char c : full_alphabet) {
        if (letters.find(c) == string::npos) {
            cout << c << endl;
            break;
        }
    }

    return 0;
}
