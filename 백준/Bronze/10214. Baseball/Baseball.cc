#include <iostream>

int main() {
    int T;  // 테스트 케이스 수
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        int Y_score = 0;  // Y팀의 총 득점
        int K_score = 0;  // K팀의 총 득점

        for (int j = 0; j < 9; ++j) {
            int Y, K;
            std::cin >> Y >> K;

            Y_score += Y;
            K_score += K;
        }

        if (Y_score > K_score)
            std::cout << "Yonsei" << std::endl;
        else if (Y_score < K_score)
            std::cout << "Korea" << std::endl;
        else
            std::cout << "Draw" << std::endl;
    }

    return 0;
}
