#include <iostream>
#include <string>

int main() {
    std::string str;
    int count = 0;
    bool word = false;

    std::getline(std::cin, str);

    for (char c : str) {
        if (c == ' ') {
            word = false;
        } else if (!word) {
            word = true;
            ++count;
        }
    }

    std::cout << count;

    return 0;
}
