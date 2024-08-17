#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    
    // 입력 받기
    std::cin >> N >> S;
    
    // 첫 번째 문자와 나머지 문자를 비교
    char firstChar = S[0];
    bool allSame = true;

    for (int i = 1; i < N; i++) {
        if (S[i] != firstChar) {
            allSame = false;
            break;
        }
    }

    // 결과 출력
    if (allSame) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
