#include <iostream>
using namespace std;

int N, A=0, cnt=0;
int p[500001];
int main(){
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> p[i];
    A = A + p[i];
    cnt ++;
  }
  cout << A-(cnt-1);
}