#include <iostream>
#include <string>
#include <list>
using namespace std;


list<int> li;


int return_Index_diff(int a) {
	int diff = 0;
	auto iter = li.begin();//이터레이터 맨 앞으로 설정 초기화

	while (*iter != a) {
		//이터레이터와 삭제하려는 숫자 사이 인덱스 차이 구함
		iter++; // 이터레이터 이동
		diff++; 
	}

	if (diff > li.size() / 2) { 
		// 인덱스 차이가 사이즈 절반 보다 크면
		return (li.size() - diff) + 100;
		// 전체 사이즈에서 차이만큼 뺀 수 +100 리턴
		// 오른쪽으로 돌려야 함
	}
	else return diff; //왼쪽으로 돌려야 함
}

int main(){
	int n, m; cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		li.push_back(i);
	}

	int* erase = new int[m];
	int total = 0;
	for (int i = 0; i < m; i++) {
		cin >> erase[i];
		int revolve = return_Index_diff(erase[i]);
		if (revolve >= 100) { //오른쪽 연산
			revolve -= 100;
			while (revolve--) {
				int temp = li.back();
				li.pop_back();
				li.push_front(temp);
				total++;
			}
		}
		else {
			while (revolve--) {
				int temp = li.front();
				li.pop_front();
				li.push_back(temp);
				total++;
			}
		}
		li.pop_front();
	}

	cout << total;

}