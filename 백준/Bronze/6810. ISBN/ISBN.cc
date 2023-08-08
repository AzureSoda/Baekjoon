#include <iostream>
using namespace std;

int main() {
    string isbn_prefix = "9780921418"; // 고정된 접두어
    char last_three_digits[3];
    for (int i = 0; i < 3; i++) {
        cin >> last_three_digits[i]; // 마지막 3자리 입력 받기
    }

    string isbn_code = isbn_prefix + string(last_three_digits, 3); // 접두어와 마지막 3자리를 합쳐서 ISBN 코드 생성

    int sum = 0;
    for (int i = 0; i < 13; i++) {
        int digit = isbn_code[i] - '0'; // 문자를 숫자로 변환
        int multiplier = (i % 2 == 0) ? 1 : 3; // 1과 3을 번갈아가며 사용하기 위해 1 또는 3을 선택
        sum += digit * multiplier; // 숫자와 선택한 1 또는 3을 곱해서 합산
    }

    cout << "The 1-3-sum is " << sum << endl;

    return 0;
}
