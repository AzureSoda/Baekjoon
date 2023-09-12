#include <iostream>
#include <string>
using namespace std;

int main() {
    int V;
    cin >> V;
    
    string votes;
    cin >> votes;

    int countA = 0, countB = 0;

    for (char vote : votes) {
        if (vote == 'A') {
            countA++;
        } else if (vote == 'B') {
            countB++;
        }
    }

    if (countA > countB) {
        cout << "A";
    } else if (countA < countB) {
        cout << "B";
    } else { 
        cout << "Tie";
    }

   return 0;
}
