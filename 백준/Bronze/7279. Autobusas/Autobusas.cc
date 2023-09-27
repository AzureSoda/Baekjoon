#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    int passengers = 0, max_standing = 0;
    
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;

        passengers += a - b;

        // 서 있는 승객 계산
        int standing = max(0, passengers - K);
        
        // 최대 서 있는 승객 업데이트
        max_standing = max(max_standing, standing);
    }
    
    cout << max_standing << endl;

    return 0;
}
