#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        long long x, y;
        std::cin >> x >> y;
        std::cout << x + y << "\n";
    }

    return 0;
}
