#include <iostream>
#include <string>
#include <queue>
using namespace std;

/*
* 원형 큐 문제
  k번째 전 사람들을 맨 뒤로 이동
  k번째 사람이 빠진다
  다시 k번째 사람이 빠지는 것을 2명 남을 때 까지 반복
*/

int main() {
	int n, k;
	cin >> n >> k;
	queue<int>que;

	cout << "<";
	for (int j = 1; j <= n; j++) {
		que.push(j);
	}

	while (n > 0) {
		if (n == 1) {
			cout << que.front() << ">";
			que.pop();
			n--;
			break;
		}

		for (int i = 1; i < k; i++) {
			int a = que.front();
			que.pop();
			que.push(a);
		}
		cout << que.front() << ", ";
		que.pop();
		n--;
	}	
}