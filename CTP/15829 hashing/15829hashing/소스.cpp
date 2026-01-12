#include <iostream>
#include <string>
#include <math.h>
using namespace std;

long long int pow_x(int a, int b) {
	if (b == 0)return 1;
	else return a * pow_x(a, b - 1);
}

int main() {
	int n; cin >> n;
	string str; cin >> str;
	long long int hash = 0;

	for (int i = 0; i < n; i++) {
		long long int num = ((int)str[i] - 96) * pow_x(31,i);
		hash += num;
	}
	cout << hash;
}