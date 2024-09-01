#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N; // 문자열의 길이 입력
    string S, T;
    cin >> S >> T; // 두 문자열 입력

    int hammingDistance = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] != T[i]) {
            ++hammingDistance;
        }
    }

    cout << hammingDistance << endl; // 하밍 거리 출력

    return 0;
}
