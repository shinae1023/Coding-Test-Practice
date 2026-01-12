#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> list; //리스트 
	int sum = 0;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		list.push_back(num); //리스트에 담음
	}

	sort(list.begin(),list.end()); // 시간 순으로 정렬

	while (!list.empty()) {
		vector<int>::iterator iter = list.begin();
		sum += (list.front() * n);
		list.erase(iter);
		n--;
	}

	cout << sum;
	
}