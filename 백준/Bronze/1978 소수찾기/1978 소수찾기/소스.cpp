#include <iostream>
#include <math.h>
using namespace std;

/*소수 판별 알고리즘
* 1) 2부터 n-1까지 나눠보고 나누어 떨어지는지 확인
* 2) 소수는 짝을 이루므로 2부터 루트 n까지 나눠보고 
	나누어 떨어지는지 확인
* 3)에라토스테네스의 체
	- 어떤 수의 배수인 수는 소수가 절대 아님
*/
bool IsPrime(int n) {
	if (n == 1) return false;
	if (n == 2) return true;
	for (int i = 2; i <= floor(sqrt(n)); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n; cin >> n;
	int* arr = new int[n];
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (IsPrime(arr[i])) {
			cnt++;
		}
	}

	cout << cnt;
}
