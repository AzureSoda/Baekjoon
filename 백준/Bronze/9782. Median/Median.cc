#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    std::string line;
    int caseNumber = 1;

    while (true) {
        std::getline(std::cin, line);
        if (line == "0") break;

        std::istringstream iss(line);
        int n;
        iss >> n;

        std::vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            iss >> numbers[i];
        }

        double median;
        if (n % 2 == 1) {
            // n이 홀수일 때
            median = numbers[n / 2];
        } else {
            // n이 짝수일 때
            median = (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
        }

        std::cout << "Case " << caseNumber << ": " << std::fixed << std::setprecision(1) << median << std::endl;
        caseNumber++;
    }

    return 0;
}
