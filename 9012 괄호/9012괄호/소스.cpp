#include <iostream>
#include <stack>
#include<string>
using namespace std;

/* 맨 처음은 반드시 '('
(에는 )가 수반 되어야함 
(나온 후 ) 나오면 pop 2번 
검사 후 stack empty 검사해서 1나오면 vps*/

int main() {
	int num;
	cin >> num;
	string str; // 괄호 입력 받을 곳

	while (num > 0) {
		cin >> str;
		stack<char>stack; // 스택 생성
		int lcnt = 0; // 왼쪽 방향 괄호 카운트

		for (int i = 0; i < str.size(); i++) { //push str
			stack.push(str[i]);

			if (str[0] == ')') {
				break; // 처음 괄호가 )면 바로 break;
			}
			else if (str[i] == '(') lcnt++; // 왼쪽 괄호면 카운트 증가
			else if (str[i] == ')') { //오른쪽 괄호일때
				if (lcnt > 0) { // 카운트가 0 이상이라면
					stack.pop(); // pop 2번해서 괄호쌍 내보냄
					stack.pop();
					lcnt--; // 카운트 감소
				}
			}
		}
		//모든 반복 후
		if (stack.empty()) cout << "YES"<<endl; //스택이 비었으면 yes
		else cout << "NO"<<endl; // 아니면 no

		num--;
	}
}