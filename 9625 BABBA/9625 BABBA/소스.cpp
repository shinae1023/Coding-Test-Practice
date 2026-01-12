#include<iostream>
using namespace std;
/*
* A는 B로 바뀌고 B는 BA로 바뀜
* 버튼 한 번 누를 때 마다
* b의 갯수 = 직전 a+b
* a의 갯수 = 직전의 b갯수
*/
int main() {
	int n; cin >> n;
	int a=1, b=0;

	while (n--) {
		int temp = b;
		b += a;
		a = temp;
	}

	cout << a << " " << b;
}