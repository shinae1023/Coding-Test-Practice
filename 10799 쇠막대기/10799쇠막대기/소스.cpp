#include <iostream>
#include <string>
using namespace std;

/*
* 나뉘는 막대 갯수 = 레이저 + 1개
* 막대 갯수 = 레이저 제외한 '('갯수
* 레이저 갯수 = )와 인접한 ( 갯수
*/
int main() {

	int stickcnt=0, partedcnt=0;
	int laser;

	string stick; // 막대와 레이저 정보 입력
	cin >> stick;

	for (int i = 0; i < stick.length(); i++) {
		if (stick[i] == '(') stickcnt++; // ( 일때 스틱 카운트 +1
		else if (i!=0&& stick[i - 1] == '(' && stick[i] == ')') {
			// 레이저인 경우 스틱 카운트 -1 및 레이저 갯수 +1
			stickcnt--; 
			partedcnt += stickcnt;
			// 레이저가 있으면 그만큼의 막대가 생김
		}
		else { //stick[i] == ')' 막대가 끝남
			//그러므로 남은 조각 1개 및 스틱 카운트 감소
			partedcnt++; stickcnt--;
		}
	}

	cout << partedcnt;

}
