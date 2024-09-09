#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_date;
    cin >> input_date;

    // 2023-10-21에서 35일을 빼면 2023-09-16이 된다.
    string cutoff_date = "2023-09-16";

    // 날짜 비교를 위해 YYYY-MM-DD 형식으로 변환
    if (input_date > cutoff_date) {
        cout << "TOO LATE" << endl;
    } else {
        cout << "GOOD" << endl;
    }

    return 0;
}
