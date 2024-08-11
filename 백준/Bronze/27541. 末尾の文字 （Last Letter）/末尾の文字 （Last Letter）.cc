#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    
    // 입력을 받습니다.
    std::cin >> N >> S;
    
    // 문자열 S의 마지막 문자가 'G'인 경우와 아닌 경우를 처리합니다.
    if (S.back() == 'G') {
        // 마지막 문자가 'G'인 경우, 'G'를 제거합니다.
        S.pop_back();
    } else {
        // 마지막 문자가 'G'가 아닌 경우, 'G'를 추가합니다.
        S += 'G';
    }
    
    // 결과를 출력합니다.
    std::cout << S << std::endl;
    
    return 0;
}
