#include <iostream>
using namespace std;

char determineGrade(int x, int y, int z, int x_prime, int y_prime, int z_prime) {
    // 모든 E 기준을 만족해야 하므로, 그렇지 않으면 E를 반환
    if (z_prime < z) return 'E';
    
    // 모든 C와 E 기준을 만족해야 하므로, 하나라도 만족하지 않으면 C보다 낮은 성적을 반환
    if (y_prime < y) {
        // D 성적 판정: 모든 E와 C의 절반 이상을 만족해야 함
        if (2 * y_prime >= y) return 'D';
        else return 'E';
    }
    
    // 모든 A, C, E 기준을 만족해야 하므로, 하나라도 만족하지 않으면 A보다 낮은 성적을 반환
    if (x_prime < x) {
        // B 성적 판정: 모든 C, E와 A의 절반 이상을 만족해야 함
        if (2 * x_prime >= x) return 'B';
        else return 'C';
    }
    
    // 모든 기준을 만족하면 A를 반환
    return 'A';
}

int main() {
    int x, y, z, x_prime, y_prime, z_prime;
    
    // 기준 개수 입력
    cin >> x >> y >> z;
    // 학생이 충족한 기준 개수 입력
    cin >> x_prime >> y_prime >> z_prime;
    
    // 성적 결정
    char grade = determineGrade(x, y, z, x_prime, y_prime, z_prime);
    
    // 성적 출력
    cout << grade << endl;
    
    return 0;
}
