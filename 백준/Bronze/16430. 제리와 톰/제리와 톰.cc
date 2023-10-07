#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    // 1kg에서 제리가 훔쳐간 치즈의 무게를 뺀다.
    std::cout << (B - A) << " " << B << std::endl;

    return 0;
}
