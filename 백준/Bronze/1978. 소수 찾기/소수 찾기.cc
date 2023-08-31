#include <iostream>

using namespace std;

// 소수인지 여부를 판단하는 함수
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        
        if (isPrime(num)) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
