#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        int A, B;
        std::cin >> A >> B;

        std::cout << lcm(A, B) << "\n";
    }

    return 0;
}
