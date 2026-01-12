#include<iostream>
#include <queue>
#include <string>
using namespace std;
/*
* 큐에 삽입하면서 max 탐색 
	order은 따라가야되는 숫자 순서
* max까지 팝하고 다시 푸쉬하면서 order 조정
* order가 0이 되었을때 max라면 그 숫자 몇번째로 나가는지 출력
* 아니라면 맨 뒤로 이동하고 order = q.size()-1로 조정
* 가장 큰 수 max를 pop하고 order--
*/ 

int main() {
	int n; cin >> n;
	int paper, order, num;
	
	while (n--) {
		cin >> paper >> order;
		queue<int>q;
		int max = 0; int cnt = 0;

		for (int i = 0; i < paper; i++) {
			cin >> num;
			q.push(num);
			if (num > max) max = num;
		}

		while (!q.empty()) {
			while (q.front() != max) {
				int temp = q.front();
				q.pop();
				q.push(temp);
				if (order == 0) order = q.size() - 1;
				else order--;
			}
			q.pop();
			if (order == 0) {
				cout << cnt+1<<"\n"; break;
			}
			else order--;
			cnt++; 
			max = q.front();
			for (int i = 0; i < q.size(); i++) {
				int temp = q.front();
				q.pop();
				q.push(temp);
				if (max < temp) max = temp;
			}
		}

	}
}