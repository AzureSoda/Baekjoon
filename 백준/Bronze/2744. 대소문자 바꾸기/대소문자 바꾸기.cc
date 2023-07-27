#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (char& c : s) {
        if (isupper(c)) {
            cout << (char)tolower(c);  // 대문자를 소문자로 변환하는 함수
        } else {
            cout << (char)toupper(c);  // 소문자를 대문자로 변환하는 함수
        }
    }

    return 0;
}
