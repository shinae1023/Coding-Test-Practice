#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int num; //문장 갯수
	cin >> num;
	cin.ignore(); //버퍼 제거

	string str = " "; //입력 받을 문장
	stack<char> st;//스택 라이브러리 이용한 스택 생성

	while (num > 0) {
		getline(cin, str);// 문장 전체 저장을 위해 getline함수 사용
		//cin 사용 시 띄어쓰기마다 따로 저장됨
		str += ' '; //띄어쓰기를 통해 단어를 구분하므로 마지막에도 추가

		for (int i = 0; i < str.size(); i++) { 
			//문장 사이즈(길이)만큼 반복
			if (str[i] == ' ') { // 문장 중 공백 발생시
				while (!st.empty()) { //빈스택이 아니라면
					cout << st.top(); // 스택 상단 출력 및
					st.pop(); //제거
				}
				cout << str[i];
			}
			else st.push(str[i]); // 아니면 그냥 stack에 push
		}
		cout << endl;
		num--;
	}
}
