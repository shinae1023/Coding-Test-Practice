#include <iostream>
#include <string>
using namespace std;


int queue[2000000] = { 0, };
int* front = queue;
int* back = queue;
int cnt = 0;

void push(int x) {
	*back = x;
	back++;
	cnt++;
}
void pop() {
	if (cnt == 0) cout<< -1<<"\n";
	else {
		cout << *front << "\n";
		front++;
		cnt--;
	}
}

int size() {
	return cnt;
}

int empty() {
	if (cnt == 0) return 1;
	else return 0;
}

int p_front() {
	if (cnt == 0) return -1;
	else return *front;
}

void p_back() {
	if (cnt == 0) cout << -1<<"\n";
	else {
		back--;
		cout << *back << "\n";
		back++;
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	while (n--) {
		string order; int var; cin >> order;

		if (order == "push") {
			cin >> var;
			push(var);
		}
		else if (order == "pop") {
			pop();
		}
		else if (order == "size") {
			cout << size() << "\n";
		}
		else if (order == "empty") {
			cout << empty() << "\n";
		}
		else if (order == "front") {
			cout << p_front() << "\n";
		}
		else {
			p_back();
		}
	}
}