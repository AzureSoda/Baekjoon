#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character after reading n

    for (int i = 0; i < n; ++i) {
        string sentence;
        getline(cin, sentence);

        if (!sentence.empty() && sentence.back() != '.') {
            sentence += '.';
        }

        cout << sentence << endl;
    }

    return 0;
}
