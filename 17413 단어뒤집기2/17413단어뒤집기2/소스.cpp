#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	str += " ";
	stack<char>stc; 
	
	for (int i = 0; i < str.length(); i++) {
		stc.push(str[i]);
		if (str[i] == ' ') {
			stc.pop();
			while (!stc.empty()) {
				cout << stc.top();
				stc.pop();
			}
			cout << " ";
		}
		else if (str[i] == '<') {
			stc.pop();
			if (stc.empty()) {
				for (; str[i] != '>'; i++) {
					cout << str[i];
				}
				cout << ">"; 
			}
			else {
				while (!stc.empty()) {
					cout << stc.top();
					stc.pop();
				}
				i--;
			}
		}
	}
}