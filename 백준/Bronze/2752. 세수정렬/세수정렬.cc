#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int small, mid, big;
    
    // 가장 작은 수 찾기
    if (a < b && a < c) {
        small = a;
    }
    else if (b < a && b < c) {
        small = b;
    }
    else {
        small = c;
    }
    
    // 가장 큰 수 찾기
    if (a > b && a > c) {
        big = a;
    }
    else if (b > a && b > c) {
        big = b;
    }
    else {
        big = c;
    }
    
    // 중간 수 찾기
    if (a != small && a != big) {
        mid = a;
    }
    else if (b != small && b != big) {
        mid = b;
    }
    else {
        mid = c;
    }
    
    cout << small << " " << mid << " " << big;
    
    return 0;
}
