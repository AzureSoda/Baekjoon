#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, X, Y;
        cin >> N >> X >> Y;
        vector<int> colors(N);
        for(int i=0; i<N; i++) {
            cin >> colors[i];
        }
        if(colors[0] == X && colors[N-1] == Y) {
            cout << "BOTH\n";
        } else if(colors[0] == X) {
            cout << "EASY\n";
        } else if(colors[N-1] == Y) {
            cout << "HARD\n";
        } else {
            cout << "OKAY\n";
        }
    }
    return 0;
}
