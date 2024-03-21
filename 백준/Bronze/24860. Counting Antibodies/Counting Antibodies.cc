#include <iostream>
using namespace std;

int main() {
    int V_kappa, J_kappa, V_lambda, J_lambda, V_h, D_h, J_h;
    cin >> V_kappa >> J_kappa;
    cin >> V_lambda >> J_lambda;
    cin >> V_h >> D_h >> J_h;
    
    // 각 경량 체인과 무거운 체인의 조합 수를 계산합니다.
    long long light_chain_combinations = (long long)V_kappa * J_kappa + (long long)V_lambda * J_lambda;
    long long heavy_chain_combinations = (long long)V_h * D_h * J_h;
    
    // 가능한 면역글로불린 분자의 총 수를 출력합니다.
    cout << light_chain_combinations * heavy_chain_combinations << endl;
    
    return 0;
}
