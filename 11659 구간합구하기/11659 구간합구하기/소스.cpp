#include <iostream>
using namespace std;

/* 누적합 알고리즘
* 각 인덱스까지의 합을 구하고 싶을 때
* 1+2+3 1+2+3+4+5 이렇게 하는 것보다
* 각 수의 누적합을 미리 저장하고 있는 것이 더욱 편리
* 1234567의 수열에서 인덱스 3에서 7까지의 합을 구하고 싶다면
* 누적합 7에서 누적합 2을 빼면 된다
*/

int* arrSumInit(int* arr,int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		sum += num; arr[i] = sum;
	}
	return arr;
}

void printSum(int* arr, int a, int b) {

	if (a >= 2) {
		cout << arr[b - 1] - arr[a - 2] << "\n";
	}
	else if (a == b) {
		cout << arr[a - 1]<<"\n";
	}
	else {
		cout << arr[b - 1] << "\n";
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m; cin >> n >> m;
	int* arrSum = new int[n];
	
	arrSumInit(arrSum,n);
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		printSum(arrSum, a, b);
	}
}