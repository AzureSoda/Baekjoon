#include <iostream>
#include <vector>
using namespace std;

void checkTriangle(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid" << endl;
    }
    else if (a == b && b == c) {
        cout << "Equilateral" << endl;
    }
    else if (a == b || a == c || b == c) {
        cout << "Isosceles" << endl;
    }
    else {
        cout << "Scalene" << endl;
    }
}

int main() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        checkTriangle(a, b, c);
    }
    return 0;
}
