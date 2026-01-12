#include <iostream>
using namespace std;


int main() {
	int t; cin >> t;

	int arr[11] = {1,2,4};
	for (int i = 3; i < 11; i++) {
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}

	for (int i = 0; i < t; i++) {
		int num; cin >> num;
		cout << arr[num - 1] << "\n";
	}
}
