#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[101];
    cin >> word;

    int length = strlen(word); // 단어의 길이
    bool is_palindrome = true; // 팰린드롬 여부

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}
