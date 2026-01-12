#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	long long arr[80] = { 1,1,2 };
	
	if (n == 1) {
		cout << 4; return 0;
	}

	for (int i = 3; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	long long w = arr[n - 1] * 4 + arr[n - 2] * 2;
	cout << w;
}