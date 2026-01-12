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

bool num[1000001] = { };

void IsPrime(int a, int b) {
	for (int i = 2; i <= b; i++) {
		if (num[i] == false) continue;
		for (int j = 2 * i; j <= b; j += i) num[j] = false;
	}
}

void printPrime(int a, int b) {
	for (int i = a; i <= b; i++) {
		if (num[i] == true&&i!=1) {
			cout << i << "\n";
		}
	}
}

int main() {
	int a, b; cin >> a >> b;
	fill_n(num, 1000001, true);
	IsPrime(a, b);
	printPrime(a, b);
}
