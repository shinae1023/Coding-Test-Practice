#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int n; cin >> n;
	queue<int>q;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (q.size() != 1) {
		q.pop();
		int re = q.front();
		q.pop();
		q.push(re);
	}

	cout << q.front();
}