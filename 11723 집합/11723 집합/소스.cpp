#include <iostream>
using namespace std;

/* 비트 마스킹 - 집합에서 각 원소의 유무를 0,1로 나타내는 방법
* and - 두 비트 모두 1이면 1 A&B
* or - 두 비트 중 1개만 1이면 1 A|B
* xor - 두 비트가 서로 다르면 1 A^B
* nor - 보수 ~A
* A << B - 왼쪽으로 B만큼 이동
* A >> B - A의 각 비트를 y만큼 오른쪽으로 이동 14>>3
* A >>> B - A의 각 비트르 B만큼 오른쪽으로 이동
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	long long set = 0;
	while (n--) {
		string order; cin >> order;
		if (order == "add") {
			int x; cin >> x;
			set = set | (static_cast<long long>(1) << x - 1);
		}
		else if (order == "remove") {
			int x; cin >> x;
			set = set & ~(static_cast<long long>(1) << x - 1);
		}
		else if (order == "check") {
			int x; cin >> x;
			if ((set & (static_cast<long long>(1) << x - 1)) == 0) {
				cout << 0<<"\n";
			}
			else cout << 1<<"\n";
		}
		else if (order == "toggle") {
			int x; cin >> x;
			if ((set & (static_cast<long long>(1) << x - 1)) == 0) {
				set = set | (static_cast<long long>(1) << x - 1);
			}
			else {
				set = set & ~(static_cast<long long>(1) << x - 1);
			}
		}
		else if (order == "all") {
			set = 1048575;
		}
		else {
			set = 0;
		}
	}
}