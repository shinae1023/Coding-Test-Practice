/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
* 해쉬를 통해 연결리스트로 요소 저장
* 각 노드에는 번호와 이름 저장되어 있음.


const int keyNum = 18553;

struct node
{
	int num;
	string name;
};

vector<node>list[18553];
string arr[100000];

int hashNum(string str) {
	int num = 0;
	for (int i = 0; i < str.length(); i++) {
		num += str[i] - '0';
	}
	return num & keyNum;
}

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios:: sync_with_stdio(false);
	int n, m; cin >> n>>m;
	
	for (int i = 0; i < n; i++) { //해시 테이블 생성
		node newNode; 
		newNode.num = i + 1;
		cin >> newNode.name; 
		arr[i] = newNode.name;
		int index = hashNum(newNode.name);
		list[index].push_back(newNode);
	}

	for (int i = 0; i < m; i++) {
		string quiz; cin >> quiz; // 어떤 자료형이 올 지 모르므로 string형으로 받음
		if (quiz[0] < 65) { // 아스키 코드에서 'A'가 65 = 숫자일 경우
			int number = stoi(quiz);
			cout << arr[number-1]<<"\n";
		}
		else {
			int search = hashNum(quiz);
			vector<node>::iterator iter = list[search].begin();
			while (1) {
				node cmp = *iter;
				if (cmp.name == quiz) {
					cout << cmp.num << "\n";
					break;
				}
				iter++;
			}
		}
	}
	
}*/