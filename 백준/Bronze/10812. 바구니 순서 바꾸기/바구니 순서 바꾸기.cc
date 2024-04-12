#include <iostream>
#include <vector>
#include <algorithm> // std::rotate 함수를 사용하기 위한 헤더

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> baskets(N); // 바구니를 저장할 벡터, 크기 N
    // 바구니에 번호를 1부터 N까지 초기화
    for(int i = 0; i < N; ++i) {
        baskets[i] = i + 1;
    }

    for(int i = 0; i < M; ++i) {
        int begin, end, mid;
        cin >> begin >> end >> mid;
        // 입력된 범위에 맞게 인덱스 조정 (1부터 시작하는 입력을 0부터 시작하는 인덱스로 조정)
        --begin; --mid; --end;
        
        // rotate 함수를 사용하여 범위 [begin, end] 내에서 [begin, mid]를 [mid+1, end] 뒤로 이동
        rotate(baskets.begin() + begin, baskets.begin() + mid, baskets.begin() + end + 1);
    }

    // 바구니의 최종 순서 출력
    for(int i = 0; i < N; ++i) {
        cout << baskets[i] << ' ';
    }
    cout << endl;

    return 0;
}
