#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int grade;
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "A";
    }
    else if (grade >= 80 && grade <= 89) {
        cout << "B";
    }
    else if (grade >= 70 && grade <= 79) {
        cout << "C";
    }
    else if (grade >= 60 && grade <= 69) {
        cout << "D";
    }
    else {
        cout << "F";
    }

    return 0;
}