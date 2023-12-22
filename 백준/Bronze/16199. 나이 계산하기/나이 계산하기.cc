#include <iostream>

using namespace std;

int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;
    
    // 생년월일 입력
    cin >> birthYear >> birthMonth >> birthDay;
    
    // 기준 날짜 입력
    cin >> currentYear >> currentMonth >> currentDay;
    
    // 만 나이 계산
    int age = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age -= 1;
    }
    
    // 세는 나이 계산
    int koreanAge = currentYear - birthYear + 1;
    
    // 연 나이 계산
    int yearAge = currentYear - birthYear;
    
    // 결과 출력
    cout << age << '\n';
    cout << koreanAge << '\n';
    cout << yearAge << '\n';
    
    return 0;
}
