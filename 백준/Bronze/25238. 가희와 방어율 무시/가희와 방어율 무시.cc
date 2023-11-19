#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    float perceived_defense = a * (1 - b / 100.0);
    if(perceived_defense >= 100)
        cout << 0;
    else
        cout << 1;

    return 0;
}
