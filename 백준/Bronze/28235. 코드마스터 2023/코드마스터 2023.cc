#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> cheer;
    cheer["SONGDO"] = "HIGHSCHOOL";
    cheer["CODE"] = "MASTER";
    cheer["2023"] = "0611";
    cheer["ALGORITHM"] = "CONTEST";

    string input;
    cin >> input;

    cout << cheer[input] << endl;

    return 0;
}
