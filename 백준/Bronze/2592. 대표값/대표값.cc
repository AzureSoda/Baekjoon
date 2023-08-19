#include <iostream>
#include <map>

int main() {
    int sum = 0;
    int number;
    std::map<int, int> frequency;

    for (int i = 0; i < 10; i++) {
        std::cin >> number;
        sum += number;
        frequency[number]++;
    }

    int avg = sum / 10;
    int mode = 0, max_count = 0;

    for (const auto& it : frequency) {
        if (it.second > max_count) {
            max_count = it.second;
            mode = it.first;
        }
    }

    std::cout << avg << std::endl;
    std::cout << mode << std::endl;

    return 0;
}
