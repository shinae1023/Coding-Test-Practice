#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;

	stack<int>s; int sum = 0; 
	while (n--) {
		int num; cin >> num;
		if (num == 0) s.pop();
		else s.push(num);
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum;
}