#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

/*
* 맵 STL map<자료형 1(key),자료형 2(value)>변수명 으로 선언
*/




int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(false);//입출력 최적화
	int n, m; cin >> n >> m;

	map<int, string>list;
	map<string, int>list2;

	for (int i = 0; i < n; i++) {

		string name; cin >> name;
		list.insert({ i + 1, name }); // 맵 안에 키, 밸류 변수 삽입
		list2.insert({ name, i+1 });
	}

	for (int i = 0; i < m; i++) {
		string search; cin >> search;
		auto iter = list.begin();
		if (search[0] < 65) {//숫자일 경우
			int index = stoi(search);
			if (list.find(index) != list.end()) {
				cout << list.find(index)->second<<"\n";
			}
		}
		else {// 문자일 경우
			if (list2.find(search) != list2.end()) {
				cout << list2.find(search)->second << "\n";
			}
		}
	}

}