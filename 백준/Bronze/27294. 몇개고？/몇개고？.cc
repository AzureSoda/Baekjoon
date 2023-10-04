#include <iostream>

int main() {
    int T, S;
    std::cin >> T >> S;

    int sushi_rice = 0;

    if (T <= 11) { // 아침 시간
        sushi_rice = 280;
    } else if (T >= 12 && T <= 16) { // 점심 시간
        sushi_rice = S ? 280 : 320; // 술이 있으면 280, 없으면 320
    } else { // 저녁 시간
        sushi_rice = 280;
    }

    std::cout << sushi_rice << std::endl;

    return 0;
}
