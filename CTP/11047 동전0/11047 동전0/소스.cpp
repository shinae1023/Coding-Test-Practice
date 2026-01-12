#include <iostream>
#include <vector>
using namespace std;

/*그리디 알고리즘
* 그 상황에서 가장 최적의 선택을 하는 것
*/

int main() {
	int n, k; cin >> n >> k;
	vector<int>save;
	int total = 0;

	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		save.push_back(tmp);
	} //동전 금액 입력

	while (k!=0) {
		int top = save.back(); // 가장 큰 금액
		while (top > k) { // top이 목표 금액보다 크면 pop
			save.pop_back();
			top = save.back();
		}
		total += k / save.back(); //가장 큰 수로 나눈 몫이 동전갯수
		k = k % save.back(); // 목표금액은 나머지
		save.pop_back(); //맨 위 동전 pop
	}

	cout << total;

}