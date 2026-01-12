#include <iostream>
using namespace std;

long long int combination(long long int a, int b) {
	long long int mul = 1;
	if (b == 0)return 1;
	else {
		while (b--) {
			mul *= a;
			a--;
		}
		return mul;
	}
}


int main() {
	int n; cin >> n;
	int w, e;

	while (n--) {
		cin >> w >> e;
		long long int count;
		if (w > e / 2) {
			count = combination(e, e-w) / combination(e-w, e-w);
		}
		else {
			count = combination(e, w) / combination(w, w);
		}
		cout << count << "\n";
	}
}