#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    long long a;
    std::cin >> a;

    // Calculate the side length of the square courtyard
    double side_length = std::sqrt(a);

    // Calculate the total length of electrical wiring needed
    double total_length = 4 * side_length;

    // Output the result with 6 decimal places
    std::cout << std::fixed << std::setprecision(6) << total_length << std::endl;

    return 0;
}
