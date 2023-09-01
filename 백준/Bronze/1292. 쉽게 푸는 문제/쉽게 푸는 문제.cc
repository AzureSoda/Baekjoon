#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int sum = 0;
    int num = 1;
    
    for (int i = 1; i <= B; ++i) {
        if (i >= A) {
            sum += num;
        }
        
        if (i == num * (num + 1) / 2) {
            num++;
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
