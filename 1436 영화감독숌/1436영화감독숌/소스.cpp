#include <iostream>
using namespace std;
/*
* 맨 끝자리 부터 6인지 확인 
* 3연속 6일 경우 카운트 증가 (종말의 수)
* 아닐 경우 다음 수 검증
*/
int main() {
    int n;
    cin >> n;
    int count = 0;
    int cnt = 0;
    for (int i = 666; i <= 10000000; i++) {
        int tmp = i;
        cnt = 0;
        while (tmp) {
            if (tmp % 10 == 6) {
                cnt++;
            }
            else {
                cnt = 0;
            }
            if (cnt == 3) {
                count++;
                cnt = 0;
                break;
            }
            tmp /= 10;
        }
        if (count == n) {
            cout << i << "\n";
            return 0;
        }

    }
}
