#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string order;
	int num;
	cin >> n;

	int arr[10000]; //큐로 사용할 배열 생성
	int* front = arr; // 큐에서 가장 앞에 있는 수 가리킴
	int* back = arr; //  큐에서 가장 뒤에 있는 수 + 1 가리킴
	int cnt=0; // 큐의 길이 

	while (n--) {
		cin >> order;

		if (order == "push") {
			cin >> num;
			*back = num;// back포인터가 가리키는 곳에 숫자 넣음
			back++; // back 포인터 한칸 이동
			cnt++; // 길이 +1
		}
		else if (order == "front") {
			if (cnt == 0) {
				cout << "-1\n";
				continue;
			}
			cout << *front << "\n";
		}
		else if (order == "back") {
			if (cnt == 0) {
				cout << "-1\n";
				continue;
			}
			back--; // back 포인터 하나 뒤로
			cout << *back << "\n"; // 가장 뒤에 있는 수 출력
			back++; // 포인터 원상복구
		}
		else if (order == "size") {
			cout << cnt << "\n"; // 길이  출력
		}
		else if (order == "pop") {
			if (cnt == 0) {
				cout << "-1\n";
				continue;
			}
			cout << *front << "\n"; // front가 가리키는 수 pop
			front++; // front 포인터 뒤로 이동
			cnt--;
		}
		else { // order == empty;
			if (cnt == 0)cout << "1\n";
			else cout << "0\n";
		}
	}
}