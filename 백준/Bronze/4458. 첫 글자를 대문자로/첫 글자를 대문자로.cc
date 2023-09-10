#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i) {
        string sentence;
        getline(cin, sentence);

        if (!sentence.empty()) {
            sentence[0] = toupper(sentence[0]);
            cout << sentence << endl;
        }
    }

    return 0;
}
