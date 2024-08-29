#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input; // 암호화된 문자열 입력 받기

    string output; // 디코딩된 문자열을 저장할 변수
    int index = 0; // 현재 인덱스

    while (index < input.length()) {
        output += input[index]; // 현재 문자 추가
        index += (input[index] - 'A' + 1); // 다음 문자 위치 계산
    }

    cout << output << endl; // 디코딩된 문자열 출력
    return 0;
}
