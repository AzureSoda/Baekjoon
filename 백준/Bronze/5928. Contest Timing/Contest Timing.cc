#include <iostream>

int main() {
    int D, H, M;
    std::cin >> D >> H >> M;

    int start = 11*60 + 11; // contest start time in minutes
    int end = (D-11)*24*60 + H*60 + M; // contest end time in minutes

    if (end < start) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << end - start << std::endl;
    }

    return 0;
}
