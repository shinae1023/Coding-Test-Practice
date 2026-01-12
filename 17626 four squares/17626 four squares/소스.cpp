#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n; cin >> n;
	int numSquare;
	int arr[50001] = { 0,1,2,3,1,2};
	/*
	* isSquare()함수를 통해 n에 근접한 제곱수 찾은 후 나머지는 다이나믹
	*/
	
	for (int i = 6; i <= n; i++) {
		int square = sqrt(i);
		int left = i - (square*square);
		arr[i] = 1 + arr[left];
	}

	cout << arr[n];
}

