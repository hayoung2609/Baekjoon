#include <iostream>

using namespace std;

/* <나의 풀이>
int main(){
    int H = 0, M = 0;

    cin >> H >> M;

    if(M < 45){
        M += 15;     // (60 + M) - 45
        if(H == 0) H = 23;      ->  H = (H - 1 + 24) % 24;
        else{
            H = H - 1;
        }
    }
    else {
        M -= 45;
    }

    cout << H << " " << M << endl;

    return 0;
}
*/

int main() {
    // C++ 입출력 속도 가속 (알고리즘 문제 풀이 필수 테크닉)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, M;
    cin >> H >> M;

    // 1. 일단 45분을 뺍니다.
    M -= 45; 

    // 2. 분이 음수가 되면 시간을 조정합니다.
    if (M < 0) {
        M += 60; // 60분을 더해주고
        H--;     // 시간을 1 뺍니다.

        // 3. 시간이 음수(-1)가 되면 23시로 돌립니다.
        if (H < 0) {
            H = 23;
        }
    }

    cout << H << " " << M << endl;

    return 0;
}