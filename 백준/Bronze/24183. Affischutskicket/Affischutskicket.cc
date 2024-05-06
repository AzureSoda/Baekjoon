#include <iostream>
#include <iomanip> // setprecision을 사용하기 위해 필요

using namespace std;

int main() {
    // ytvikter를 입력받을 변수
    int ytvikt_kuvert, ytvikt_affisch, ytvikt_info;
    cin >> ytvikt_kuvert >> ytvikt_affisch >> ytvikt_info;

    // C4 크기의 봉투 무게 계산 (두 장의 무게)
    double kuvert_vikt = 2.0 * (229 * 324 / 1000000.0) * ytvikt_kuvert;
    // A3 크기의 포스터 무게 계산 (두 장의 무게)
    double affisch_vikt = 2.0 * (297 * 420 / 1000000.0) * ytvikt_affisch;
    // A4 크기의 정보지 무게 계산
    double info_vikt = (210 * 297 / 1000000.0) * ytvikt_info;

    // 총 무게 계산
    double total_vikt = kuvert_vikt + affisch_vikt + info_vikt;

    // 결과 출력
    cout << fixed << setprecision(6) << total_vikt << endl;

    return 0;
}
