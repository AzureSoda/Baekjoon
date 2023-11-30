#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int* M = new int[N];

    for(int i=0; i<N; i++) {
        cin >> M[i];
    }

    for(int i=0; i<N; i++) {
        if(M[i] == 300) cout << "1 ";
        else if(M[i] >= 275) cout << "2 ";
        else if(M[i] >= 250) cout << "3 ";
        else cout << "4 ";
    }
    delete[] M;
    return 0;
}
