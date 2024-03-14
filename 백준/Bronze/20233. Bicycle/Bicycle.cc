#include <iostream>
using namespace std;

int main() {
    int a, x, b, y, T;
    cin >> a >> x >> b >> y >> T;

    // 첫 번째 옵션 계산
    int extraTimeFirstOption = max(0, T - 30); // 일일 초과 시간 계산
    int totalCostFirstOption = a + (extraTimeFirstOption * x * 21); // 총 비용 계산

    // 두 번째 옵션 계산
    int extraTimeSecondOption = max(0, T - 45); // 일일 초과 시간 계산
    int totalCostSecondOption = b + (extraTimeSecondOption * y * 21); // 총 비용 계산

    // 결과 출력
    cout << totalCostFirstOption << " " << totalCostSecondOption << endl;

    return 0;
}
