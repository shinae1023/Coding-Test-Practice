#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	double sum = 0;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+n);
	double remove = round(n * 0.15);

	for (int i = remove; i < n - remove; i++) {
		sum += arr[i];
	}
	sum = round(sum / (n - remove * 2));
	cout << sum;
}