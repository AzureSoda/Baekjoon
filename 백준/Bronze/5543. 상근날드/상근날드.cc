#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int burger[3];
    int coke, cider;
    for (int i = 0; i < 3; i++) {
        cin >> burger[i];
    }
    cin >> coke;
    cin >> cider;
    int min_burger = min(min(burger[0], burger[1]), burger[2]);
    int min_drink = min(coke, cider);
    int result = min_burger + min_drink - 50;
    cout << result << endl;
}
