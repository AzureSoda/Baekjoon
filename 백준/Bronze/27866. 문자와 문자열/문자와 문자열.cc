#include <iostream>
#include <string>

int main() {
    std::string S;
    int i;

    std::cin >> S;
    std::cin >> i;

    std::cout << S[i - 1] << std::endl;

    return 0;
}
