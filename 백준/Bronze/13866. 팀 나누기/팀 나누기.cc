#include <iostream>
#include <algorithm> // std::abs 함수를 사용하기 위해 추가합니다.

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D; // 스킬 레벨 입력 받기

    // 가능한 팀 구성은 다음과 같습니다:
    // 1. A + D vs B + C
    // 2. A + C vs B + D
    // 3. A + B vs C + D
    // 팀 스킬 레벨 차이의 최솟값을 찾기 위해 각 구성의 차이를 계산합니다.

    int diff1 = std::abs((A + D) - (B + C));
    int diff2 = std::abs((A + C) - (B + D));
    int diff3 = std::abs((A + B) - (C + D));

    // 세 구성의 차이 중 최솟값을 찾습니다.
    int min_diff = std::min({diff1, diff2, diff3});

    std::cout << min_diff; // 최솟값 출력

    return 0;
}
