#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); // 빠른 입출력

	int n; cin >> n;
	int arr[300]; 
	for (int i = 0; i < n; i++) { //데이터 입력
		cin >> arr[i];
	}

	int total[300]; // 점수 배열 생성
	/*
	* 점화식 total[n] = max(total[n-2],total[n-3]+arr[n-1)+arr[3]
	* n번째 계단에 도착한다고 가정할 때
	* 한 칸 뛰어넘어 도착하는 경우와
	* 연속으로 올라오는 경우 중 더 큰 값을 고른다
	*/
	//초반 배열 입력
	total[0] = arr[0]; 
	total[1] = total[0] + arr[1];
	total[2] = max(total[0] + arr[2], arr[1] + arr[2]);
	total[3] = max(total[1] + arr[3], total[0] + arr[2] + arr[3]);

	for (int i = 4; i < n; i++) {
		total[i] = max(total[i - 2], total[i - 3] + arr[i - 1]) + arr[i];
	}

	cout << total[n-1];
}
