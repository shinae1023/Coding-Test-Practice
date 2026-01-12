#include <iostream>
#include<queue>
using namespace std;

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