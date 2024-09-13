#include <iostream>
#include <string>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    std::string directions;
    std::cin >> directions;

    int north = 0, east = 0;

    // 방향에 따라 이동 수를 카운트
    for (char dir : directions) {
        if (dir == 'N') north++;
        else if (dir == 'S') north--;
        else if (dir == 'E') east++;
        else if (dir == 'W') east--;
    }

    // 로봇이 돌아가야 할 최소 이동 수
    int minSteps = std::abs(north) + std::abs(east);
    std::cout << minSteps << std::endl;

    return 0;
}
