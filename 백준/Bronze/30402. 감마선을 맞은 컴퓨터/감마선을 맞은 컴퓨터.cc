#include <iostream>
#include <string>
using namespace std;

int main() {
    string photo[15];
    for (int i = 0; i < 15; i++) {
        getline(cin, photo[i]);
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (photo[i][j*2] == 'w') {
                cout << "chunbae" << endl;
                return 0;
            } else if (photo[i][j*2] == 'b') {
                cout << "nabi" << endl;
                return 0;
            } else if (photo[i][j*2] == 'g') {
                cout << "yeongcheol" << endl;
                return 0;
            }
        }
    }
    return 0;
}
