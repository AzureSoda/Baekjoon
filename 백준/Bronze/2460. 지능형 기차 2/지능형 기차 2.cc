#include <iostream>
using namespace std;

int main() {
    int passengers = 0;
    int max_passengers = 0;

    for (int i = 1; i <= 10; ++i) {
        int exit, enter;
        cin >> exit >> enter;
        passengers -= exit;
        passengers += enter;

        if (passengers > max_passengers) {
            max_passengers = passengers;
        }
    }

    cout << max_passengers;

    return 0;
}
