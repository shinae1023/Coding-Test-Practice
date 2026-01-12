#include <iostream>
using namespace std;

int main() {
	long long arr[100] = { 1,1,1,2 };

	int t; cin >> t;
	for (int i = 4; i < 100; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
	}

	for (int i = 0; i < t; i++) {
		int q; cin >> q;
		cout << arr[q - 1]<<"\n";
	}
}