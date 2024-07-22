#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    int a, b, c;
    char op;
    ss >> a >> op >> b >> op >> c;

    int sum = a + b;
    if (sum == c) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
