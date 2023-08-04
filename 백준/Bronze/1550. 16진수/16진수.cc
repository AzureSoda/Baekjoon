#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string hex_num;
    cin >> hex_num;
    
    int dec_num = 0;
    int hex_digit = 0;
    for (int i = hex_num.size() - 1; i >= 0; i--) {
        char c = hex_num[i];
        if (c >= '0' && c <= '9') {
            hex_digit = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            hex_digit = c - 'A' + 10;
        }
        dec_num += hex_digit * pow(16, hex_num.size() - 1 - i);
    }
    
    cout << dec_num;
    
    return 0;
}
