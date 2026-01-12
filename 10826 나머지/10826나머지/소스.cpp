#include <iostream>
using namespace std;

int main() {
	int num[10];
	int re[42];
	for (int i = 0; i < 42; i++) {
		re[i] = 0;
	}

	for (int i = 0; i < 10; i++) {
		int n; cin >> n;
		num[i] = n % 42;
		if (re[num[i]] == 0) {
			re[num[i]] = 1;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 42; i++) {
		if (re[i] == 1) cnt++;
	}

	cout << cnt;
}