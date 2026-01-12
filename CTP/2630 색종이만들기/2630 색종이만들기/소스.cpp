#include <iostream>
#include <vector>
using namespace std;

/*
* 필요 기능 1.사각형 분할 2.색깔 카운트 3. 색깔 같은지 확인
* 
*/

int paper[128][128];
int cnt[2]; // cnt[0] white / cnt[1] blue
int index = 0;

void papercnt(int size, int index) {
	if (size == 1) {
		
	}
}

void divide(int size) {
	if (size == 1) papercnt(1,index);
	else size /= 2;

}

void check() {

}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> paper[i][j];
	}

	cout << cnt[0] << "\n" << cnt[1];
}