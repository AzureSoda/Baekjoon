#include <iostream>
#include <string>

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        std::string input;
        std::cin >> input;
        std::cout << input.front() << input.back() << std::endl;
    }

    return 0;
}
