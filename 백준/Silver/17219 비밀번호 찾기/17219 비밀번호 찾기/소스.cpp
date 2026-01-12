#include <iostream>
#include <map>

using namespace std;

map<string, string>pass;


int main() {
	cin.tie(NULL); ios::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string net, password;
		cin >> net >> password;
		pass.insert(make_pair(net, password));
		//map의 insert함수는 인자 하나만 받을 수 있기 때문에 
		//쌍으로 묶어주는 make_pair을 사용하거나 {}로 묶어줘야함
	}

	for (int i = 0; i < m; i++) {
		string q; cin >> q;
		cout << pass[q] << "\n";
	}
}