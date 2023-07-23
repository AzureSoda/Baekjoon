#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int total_minutes = A * 60 + B + C;
    int end_hour = total_minutes / 60 % 24;
    int end_minute = total_minutes % 60;

    cout << end_hour << " " << end_minute << endl;

    return 0;
}
