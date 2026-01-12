#include <iostream>
using namespace std;

/*dp (다이나믹프로그래밍)
* 작은 문제부터 시작해서 큰 문제를 푸는 것
* ex)피보나치 수열 fib(0)=0 fib(1)=1 fib(2) = 2
*	fib(3) = fib(1) + fib(2) ... fib(n) = fib(n-1)+f(n-2)
* 
* 경우의 수를 저장할 배열 선언(최대 10^6개)
* memo[0]=0 [1] = 0, [2] = 1, [3] =1
* [4] = memo[4/2]+1 or memo[4-1]+1 =2
* [5] = memo[5-1]+1 = 3
* [10] = memo[10/2]+1 or memo[10-1]+1 =3//memo[9] = 2 
* [11] = memo[11-1] +1 = 4
* [12] = memo[12/3]+1 or memo[12/2]+1 or memo[12-1]+1 //3,3,5
*/

int main() {
	int n; cin >> n;
	long long  memo[1000001] = { 0,0,1,1 };

	for (int i = 4; i <= n; i++) {
		if (i % 6 == 0) {
			memo[i] = min(memo[i / 3], memo[i / 2])+1;
			memo[i] = min(memo[i], memo[i - 1] + 1);
		}
		else if (i % 3 == 0) {
			memo[i] = min(memo[i / 3], memo[i - 1])+1;
		}
		else if (i % 2 == 0) {
			memo[i] = min(memo[i / 2], memo[i - 1])+1;
		}
		else memo[i] = memo[i - 1] + 1;
	}

	cout << memo[n];
}