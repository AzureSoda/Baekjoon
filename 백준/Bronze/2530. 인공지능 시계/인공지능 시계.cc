#include <iostream>
using namespace std;

int main() {
    int a, b, c; // 현재 시각을 저장할 변수
    int d; // 오븐구이를 하는 데 필요한 시간을 저장할 변수
    int sec, min, hour; // 구이가 끝나는 시각을 저장할 변수

    // 현재 시각 입력받기
    cin >> a >> b >> c;
    // 필요한 시간 입력받기
    cin >> d;

    // 현재 시각을 초 단위로 계산하기
    sec = c + (b * 60) + (a * 3600);

    // 필요한 시간을 초 단위로 계산하기
    sec += d;

    // 구이가 끝나는 시각 계산하기
    sec %= 86400; // 1일(24시간)은 86,400초
    hour = sec / 3600;
    min = (sec % 3600) / 60;
    sec = sec % 60;

    // 구이가 끝나는 시각 출력하기
    cout << hour << " " << min << " " << sec;

    return 0;
}
