#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int n; cin >> n;
	string str; cin >> str;
	int hash = 0;

	for (int i = 0; i < n; i++) {
		int num = ((int)str[i] - 96) * pow(31,i);
		hash += num;
	}
	cout << hash;
}