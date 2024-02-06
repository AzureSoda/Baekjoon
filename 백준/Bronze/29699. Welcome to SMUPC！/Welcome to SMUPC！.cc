#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string s = "WelcomeToSMUPC";
    int len = s.length();

    cout << s[(N-1) % len];

    return 0;
}
