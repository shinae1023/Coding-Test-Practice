#include <iostream>
#include <map>;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m; cin >> n >> m;
	map<string,int>list; 	map<string, int>dup;
	
	for(int i=0;i<n;i++) {
		string str; cin >> str;
		list.insert({str, i+1});
	}
	while (m--) {
		string str; cin >> str;
		if (list.find(str)!= list.end()) {
			dup.insert({ str,0 });
		}
	}


	cout << dup.size()<<"\n";
	int size = dup.size();
	for (int i = 0; i <size; i++) {
		auto iter = dup.begin();
		cout << iter->first<<"\n";
		dup.erase(iter->first);
	}
}