#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    string result = "";
    for (char c : word) {
        if (c == 'B') result += "v";
        else if (c == 'E') result += "ye";
        else if (c == 'H') result += "n";
        else if (c == 'P') result += "r";
        else if (c == 'C') result += "s";
        else if (c == 'Y') result += "u";
        else if (c == 'X') result += "h";
        else result += c;
    }

    for (int i = 0; i < result.size(); i++) {
        if ('A' <= result[i] && result[i] <= 'Z') {
            result[i] += 32;
        }
    }

    cout << result << endl;

    return 0;
}