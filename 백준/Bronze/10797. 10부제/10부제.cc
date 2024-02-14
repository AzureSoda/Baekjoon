#include <iostream>
using namespace std;

int main() {
    int date, car, count = 0;
    cin >> date;
    for(int i = 0; i < 5; i++) {
        cin >> car;
        if(car == date) count++;
    }
    cout << count;
    return 0;
}
