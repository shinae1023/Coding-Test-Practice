#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num; // 주어지는 명령의 수

	int arr[10000];
	int* point_top = arr;
	int last = -1;

	string order;//명령
	int var;//push할 숫자

	while (num > 0) {
		cin >> order;

		if (order == "push") {
			cin >> var;
			*point_top = var;
			point_top++;
			last++;
		}
		else if (order == "top") {
			if (last == -1) cout << -1<<"\n";
			else cout << arr[last]<<"\n";
		}
		else if (order == "size") {
			cout << last + 1<<"\n";
		}
		else if (order == "empty") {
			if (last == -1) cout << 1<<"\n";
			else cout << 0 <<"\n";
		}
		else if (order == "pop") {
			if (last == -1) cout << -1<<"\n";
			else {
				cout << arr[last]<<"\n";
				last--;
				point_top--;
			}
		}

		num--;
	}
	
}