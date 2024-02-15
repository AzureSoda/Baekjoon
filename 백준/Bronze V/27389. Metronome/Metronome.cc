#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    double revolutions = n / 4.0;

    std::cout << std::fixed << std::setprecision(2) << revolutions;

    return 0;
}
