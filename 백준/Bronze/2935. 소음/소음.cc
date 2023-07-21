#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, op, B;
    cin >> A >> op >> B;

    // 덧셈의 경우, 결과 문자열의 길이는 최대 입력 문자열 중 긴 문자열의 길이 + 1
    if (op == "+") {
        if (A.length() < B.length()) {
            swap(A, B);
        }
        string result(A.length() + 1, '0');
        int carry = 0;
        for (int i = A.length() - 1, j = B.length() - 1, k = result.length() - 1; i >= 0 || j >= 0; --i, --j, --k) {
            int a_digit = (i >= 0) ? A[i] - '0' : 0;
            int b_digit = (j >= 0) ? B[j] - '0' : 0;
            int sum = a_digit + b_digit + carry;
            carry = sum / 10;
            result[k] = (sum % 10) + '0';
        }
        if (carry != 0) {
            result[0] = '1';
        } else {
            result = result.substr(1);
        }
        cout << result;
    }
    // 곱셈의 경우, 결과 문자열의 길이는 두 입력 문자열의 길이의 합 - 1
    else {
        string result(A.length() + B.length() - 1, '0');
        for (int i = 0; i < A.length(); ++i) {
            for (int j = 0; j < B.length(); ++j) {
                int product = (A[i] - '0') * (B[j] - '0');
                result[i + j] += product;
            }
        }
        cout << result;
    }

    return 0;
}
