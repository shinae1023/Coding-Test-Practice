#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, num, cnt = 0;
	int deque[10002] = { 0, };
	string order;
	
	int front = 1, back = 9999;

	cin >> n;
	while (n--) {
		cin >> order;

		if (order == "push_front") {
			cin >> num;
			deque[front] = num;
			front++; cnt++;
		}
		else if (order == "push_back") {
			cin >> num;
			deque[back] = num;
			back--; cnt++;
		}
		else if (order == "front") {
			if (cnt == 0) {
				cout << "-1\n";
				continue;
			}
			else if (deque[front-1] == 0) {
				cout << deque[back + cnt] << "\n";
				continue;
			}
			cout << deque[front-1] << "\n";
		}
		else if (order == "back") {
			if (cnt == 0) {
				cout << "-1\n";
				continue;
			}
			else if (deque[back+1] == 0) {
				cout << deque[front - cnt] << "\n";
				continue;
			}
			cout << deque[back+1] << "\n";
		}
		else if (order == "size") {
			cout << cnt << "\n"; // 길이  출력
		}
		else if (order == "pop_front") {
			if (cnt == 0) {
				cout << "-1\n";
				continue;
			}
			else if (deque[front - 1] == 0) {
				cout << deque[back + cnt] << "\n";
				deque[back + cnt] = 0;  cnt--;
				continue;
			}
			cout << deque[front-1] << "\n";
			deque[front - 1] = 0; front--; cnt--;
		}
		else if (order == "pop_back") {
			if (cnt == 0) {
				cout << "-1\n";
				continue;
			}
			else if (deque[back + 1] == 0) {
				cout << deque[front - cnt] << "\n";
				deque[front - cnt] = 0;  cnt--;
				continue;
			}
			cout << deque[back + 1] << "\n";
			deque[back + 1] = 0; back++; cnt--;
		}
		else { // order == empty;
			if (cnt == 0)cout << "1\n";
			else cout << "0\n";
		}
	}

}