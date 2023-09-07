#include <iostream>

int main() {
    int a, b;
    
    while (true) {
        std::cin >> a >> b;
        
        if (a == 0 && b == 0) {
            break;
        }
        
        if (a % b == 0) {
            std::cout << "multiple" << std::endl;
        } else if (b % a == 0) {
            std::cout << "factor" << std::endl;
        } else {
            std::cout << "neither" << std::endl;
        }
    }
    
    return 0;
}
