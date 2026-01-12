#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int>list[4950];


int bfs_cnt() {
	int cnt = 0; bool visit[101] = { false, };
	queue<int>q; visit[1] = true;
	q.push(1);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < list[x].size(); i++) {
			int next = list[x][i]; // 인접 노드 저장 2
			if (!visit[next]) { // 인접 노드 방문 안했을경우
				visit[next] = true; // 방문 했음으로 변경
				q.push(next); // 인접 노드 큐에 넣기 
				cnt++;
			}
		}
	}
	return cnt;
}

int main() {
	int n; cin >> n; //컴퓨터 갯수
	int cou; cin >> cou; //연결 된 컴퓨터 쌍

	for (int i = 0; i < cou; i++) {
		int a, b; cin >> a >> b;
		list[a].push_back(b);
		list[b].push_back(a);
	}//그래프 입력

	cout << bfs_cnt();
}