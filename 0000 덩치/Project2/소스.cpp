#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int* cnt = new int[n];
	
	struct body {
		int w; int h;
	}; //몸무게와 키를 담을 구조체

	body* st = new body[n]; //구조체 배열 할당

	for (int i = 0; i < n; i++) {
		cin >> st[i].w >> st[i].h;
		cnt[i] = 0; 
	} //변수 입력

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (st[i].h > st[j].h && st[i].w > st[j].w) {
				cnt[j]++; // 키 몸무게 둘 다 비교값 초과일때
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << cnt[i] + 1 << " ";
	}
}