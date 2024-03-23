#include <iostream>
using namespace std;

int main() {
    int speed_limit, recorded_speed;
    cin >> speed_limit >> recorded_speed;

    int speed_diff = recorded_speed - speed_limit; // 초과 속도 계산

    // 속도 위반 여부 및 벌금 출력
    if (speed_diff <= 0) {
        cout << "Congratulations, you are within the speed limit!" << endl;
    } else if (speed_diff <= 20) {
        cout << "You are speeding and your fine is $100." << endl;
    } else if (speed_diff <= 30) {
        cout << "You are speeding and your fine is $270." << endl;
    } else {
        cout << "You are speeding and your fine is $500." << endl;
    }

    return 0;
}
