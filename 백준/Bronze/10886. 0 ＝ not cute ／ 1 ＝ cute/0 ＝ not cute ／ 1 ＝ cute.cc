#include <iostream>

int main() {
    int n;
    std::cin >> n; // 투표 수 입력

    int cute = 0;  // 귀여워 표를 세는 변수
    int not_cute = 0; // 귀엽지 않아 표를 세는 변수

    for (int i = 0; i < n; i++) {
        int vote;
        std::cin >> vote; // 각 투표 결과 입력

        if (vote == 1) {
            cute++;
        } else {
            not_cute++;
        }
    }

    // 귀여워와 귀엽지 않아 표 개수를 비교하여 결과 출력
    if (cute > not_cute) {
        std::cout << "Junhee is cute!" << std::endl;
    } else {
        std::cout << "Junhee is not cute!" << std::endl;
    }

    return 0;
}
