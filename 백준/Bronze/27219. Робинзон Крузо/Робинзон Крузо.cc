#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string result = "";

    int v = n / 5;
    int i = n % 5;

    for (int j = 0; j < v; j++)
        result += "V";

    for (int j = 0; j < i; j++)
        result += "I";

    cout << result;

    return 0;
}
