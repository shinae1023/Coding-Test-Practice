#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int sugar5 = n / 5;
	int rest = n % 5;
	if (rest == 0) {
		cout << sugar5;
		return 0;
	}
	if (rest == 3) {
		cout << sugar5 + 1;
		return 0;
	}
	if (sugar5!=0 && rest != 3) {
		while (sugar5!=0) {
			rest += 5;
			sugar5--;
			if (rest % 3 == 0) {
				cout << sugar5 + rest / 3;
				return 0;
			}
		}
	}
	if (n % 3 == 0) {
		cout << n / 3;
		return 0;
	}
	cout << -1;
}