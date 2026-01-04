#include <iostream>

using namespace std;

int main(){
    // 습관화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, M, t;

    cin >> H >> M;      // cin >> H >> M >> t;
    cin >> t;

    M += t;
    while(M > 59){
        M -= 60;
        H = (H + 1 + 24) % 24;      // 더하기라서 24 없애도 됨
    }
    /* while문 없이 풀 수 있음!(훨씬 효율적)
    2. 60분이 넘는 만큼 H에 더해줍니다.
    24시가 넘어가면 0시가 되도록 나머지 연산(% 24)을 합니다.
    
    H = (H + M / 60) % 24;

    // 3. 남은 분을 구합니다.
    M = M % 60;
    */

    cout << H << ' ' << M << endl;

    return 0;
}