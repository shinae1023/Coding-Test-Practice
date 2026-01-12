#include <iostream>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

/*       1
*      2 3 4
*    5 6 7  8
* DFS 깊이 우선 탐색 - 최대한 깊이 내려간 뒤 더이상 깊이 갈 곳이
*						없을 경우 옆으로 이동
* ex) 1-2-5-6-3-7-4-8
* 스택 or 재귀로 구현 / 경로의 특징을 저장해야 할 때 사용
* 
* BFS 너비 우선 탐색 - 최대한 넓게 이동한 다음 더이상 갈 수 없을 때
*						아래로 이동
* ex) 1-2-3-4-5-6-7-8
* 큐를 통해 구현 / 최단 거리 문제 풀이 시 유용
* 
* 시간 복잡도 리스트 - 노드+간선. 인접행렬 - 노드제곱
*/

/*dfs 스택 구현 방법
* 1번 정점 스택에 넣은 후 출력
* 인접 노드 전부 스택에 삽입
* 맨 위 노드 출력 후 그 인접 노드 스택에 삽입
* 순회 끝날때까지 반복
*/

/* bfs 큐 구현 방법
* 1번 정점 큐에 담은 후 출력
* 그 인접 노드를 큐에 담음
* 맨 위 노드 출력 후 그 인접 노드 큐에 담음
* 모든 노드 순회 시 까지 반복
*/

vector<int> map[1000];
bool visit[1000] = { 0, };

void dfs(int x,int y) {
	/*stack<int>stc;
	bool* visit = new bool[y];
	memset(visit, false, y);
	visit[x - 1] = true;*/
	visit[x - 1] = true;
	cout << x << " ";

	for (int i = 0; i < map[x].size(); i++) {
		int next = map[x][i];
		if (visit[next - 1]) continue;
		dfs(next, y);
	}
	/*stc.push(x);
	cout << x << " ";
	while (!stc.empty()) {
		int z = stc.top();
		stc.pop();
		for (int i = 0; i < map[z].size(); i++) {
			int next = map[z][i];
			if (!visit[next - 1]) { // 인접 노드 방문 안했을경우
				visit[next - 1] = true; // 방문 했음으로 변경
				stc.push(next); // 인접 노드 큐에 넣기 
				cout << next << " ";
			}
		}
	}*/

}

void bfs(int x,int y){ // 시작 정점, 정점 갯수
	queue<int>que; // 큐 선언
	memset(visit, false, y);
	visit[x-1] = true; // 방문 확인 배열
	que.push(x); // 시작 정점 푸시
	cout << x <<" ";
	while (!que.empty()) { //큐가 빌때까지 반복
		int z = que.front(); // 맨 위 요소 저장
		que.pop(); // pop
		for (int i = 0; i < map[z].size(); i++) {
			int next = map[z][i]; // 인접 노드 저장
			if (!visit[next-1]) { // 인접 노드 방문 안했을경우
				visit[next-1] = true; // 방문 했음으로 변경
				que.push(next); // 인접 노드 큐에 넣기 
				cout << next << " ";
			}
		}
	}
}

int main() {
	int n, m, v;
	cin >> n >> m >> v; // 노드 간선 시작정점 

	while (m--) {
		int a, b;
		cin >> a>> b;
		
		map[a].push_back(b); 
		map[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(map[i].begin(), map[i].end());
	}

	dfs(v, n); cout << "\n";
	bfs(v,n);
	
}

