#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;

    string str_num = to_string(num);
    bool contains_seven = (str_num.find('7') != string::npos);
    bool divisible_by_seven = (num % 7 == 0);

    if (!contains_seven && !divisible_by_seven) {
        cout << "0";
    } else if (!contains_seven && divisible_by_seven) {
        cout << "1";
    } else if (contains_seven && !divisible_by_seven) {
        cout << "2";
    } else { // contains seven and divisible by seven
        cout << "3";
    }

    return 0;
}
