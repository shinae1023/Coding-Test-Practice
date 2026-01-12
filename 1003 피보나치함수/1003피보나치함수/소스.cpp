#include <iostream>
using namespace std;

/* 
* fib[4] = fib[3] +fib[2] = f[1]+f[0] +f[1] + fib[1]+fib[0]
*/


int main() {
    int n; cin >> n;
    long long arr0[41] = { 1,0,1,1 };
    long long arr1[41] = { 0,1,1,2 };

    while (n--) {
        int num; cin >> num;
        for (int i = 4; i <= num; i++) {
            arr0[i] = arr0[i - 1] + arr0[i - 2];
            arr1[i] = arr1[i - 1] + arr1[i - 2];
        }
        cout << arr0[num] << " " << arr1[num] << "\n";
    }
}