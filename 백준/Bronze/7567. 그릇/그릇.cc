#include <iostream>
#include <string>
using namespace std;

int main() {
    string dishes;
    cin >> dishes;

    int height = 10; // 첫 번째 그릇의 높이

    for (int i = 1; i < dishes.size(); i++) {
        if (dishes[i] == dishes[i - 1]) {
            height += 5;
        } else {
            height += 10;
        }
    }

    cout << height;

    return 0;
}
