#include <iostream>
#include <string>
#include <stack>
using namespace std;

/* 
* 카운트가 입력받은 숫자보다 작으면 그 숫자까지 push
* 카운트가 입력 받은 숫자보다 크면
* -  입력 받은 숫자보다 스택의 top이 작다면 NO
* -  입력 받은 숫자와 스택의 top이 같다면 pop
* 부호는 string 변수 생성하여 + 기호 이용해 저장 후 배열처럼 출력
*/

int main() {
	int num, arr,cnt=1;
	cin >> num;
	stack<int>stack; // 스택 생성
	string op;
	
	while (num--) {

		cin >> arr; // 수열 입력 받음
		if (arr >= cnt) { // 입력받은 숫자가 카운트보다 크면
			while (arr >= cnt) { // 카운트가 숫자랑 같아지도록 push
				stack.push(cnt);
				cnt += 1;
				op += '+';
			}
			stack.pop();
			op += '-';
		}
		else {
			if (stack.top() > arr) { 
				// 스택의 top이 입력받은 수보다 크면 안됨
				cout << "NO";
				return 0;
			}
			else { // 아닐 경우 pop
				stack.pop();
				op += "-";
			}
		}
	}

	// 부호 출력
	for (int i = 0; i < op.length(); i++) {
		cout << op[i] << "\n";
	}
}