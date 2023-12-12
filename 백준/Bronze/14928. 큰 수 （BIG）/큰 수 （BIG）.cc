#include<iostream>
#include<string>
using namespace std;

int main(){
    string N;
    cin >> N;

    long long remainder = 0;
    int divisor = 20000303;
    for(int i=0; i<N.size(); i++){
        remainder = (remainder*10 + (N[i]-'0')) % divisor;
    }

    cout << remainder << endl;

    return 0;
}
