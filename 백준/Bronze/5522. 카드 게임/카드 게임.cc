#include <iostream>

int main() {
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        sum += num;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
