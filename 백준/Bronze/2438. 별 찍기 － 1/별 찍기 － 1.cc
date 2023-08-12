#include <iostream>

int main() {
    int N;
    std::cin >> N;   // N을 입력 받음

    for (int i = 1; i <= N; i++) {  // 1부터 N까지 반복
        for (int j = 1; j <= i; j++) {   // 1부터 i까지 반복하여 별 출력
            std::cout << "*";
        }
        std::cout << "\n";  // 줄바꿈
    }
    return 0;
}
