#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

struct info {
	int age;
	string name;
};

bool compare(const info &a,const info  &b) {
	return a.age < b.age;
} //sort 함수 사용 시 기준을 compare로 설정할 수 있음
// 이번 경우 이름은 등록된 그대로 해야하고 나이순으로 정렬하므로
// stable_sort를 사용해야함 compare함수의 매개변수로 info형 참조 인자 전달
// const는 함수의 파라미터를 함수 내에서 변경하면 안 될 때 사용

int main() {

	int n; cin >> n;
	info* input = new info[n];

	for (int i = 0; i < n; i++) {
		cin >> input[i].age >> input[i].name;
	}

	stable_sort(input, input + n,compare);

	for (int i = 0; i < n; i++) {
		cout << input[i].age << " " << input[i].name << "\n";
	}

}