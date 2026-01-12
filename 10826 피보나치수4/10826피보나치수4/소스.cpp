#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

string fib_sum(string a, string b) {
	int num, carry = 0;
	string fibo;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.length() > b.length()) {
		b += '0';
	}

	for (int i = 0; i < a.length(); i++) {
		num = ((a[0] - '0') + (b[0] - '0') + carry)%10;
		carry = ((a[0] - '0') + (b[0] - '0')) / 10;
		fibo += to_string(num);
	}
	if (carry == 1) fibo += '1';

	reverse(fibo.begin(), fibo.end());
	return fibo;
}

int main() {
	string fib[10001] = { "0","1","1" };
	int n; cin >> n;

	for (int i = 3; i < n; i++) {
		fib[i] = fib_sum(fib[i - 1] , fib[i - 2]);
	}

	cout << fib[n];
}