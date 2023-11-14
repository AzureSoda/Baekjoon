#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N;
    cin >> A >> B;

    int chicken_with_cola = A / 2;
    int chicken_with_beer = B;

    int total_chicken = min(chicken_with_cola + chicken_with_beer, N);

    cout << total_chicken;

    return 0;
}
