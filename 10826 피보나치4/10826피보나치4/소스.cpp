#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string fib[10001] = { "0","1"};

string fib_sum(string a, string b) {
	int num, carry = 0;
	string fibo="";
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.length() > b.length()) {
		b += '0';
	}

	for (int i = 0; i < a.length(); i++) {
		num = ((a[i] - '0') + (b[i] - '0') + carry) % 10;
		carry = ((a[i] - '0') + (b[i] - '0')+carry) / 10;
		fibo += to_string(num);
	}
	if (carry == 1) fibo += '1';

	reverse(fibo.begin(), fibo.end());
	return fibo;
}

int main() {
	int n; cin >> n;

	for (int i = 2; i <= n; i++) {
		fib[i] = fib_sum(fib[i - 1], fib[i - 2]);
	}

	cout << fib[n];
}