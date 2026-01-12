#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	int n; cin >> n;
	string *word = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> word[i];
		if (word[i].length() >= 10) {
			word[i] = to_string(word[i].length()) + word[i];
		}
		else word[i] ='0'+ to_string(word[i].length()) + word[i];
		
	}

	stable_sort(word, word + n); //sortµµ °¡´É

	for (int i = 0; i < n; i++) {
		if (i > 0 && word[i - 1] == word[i]) continue;
		cout << word[i].substr(2) << "\n";
	}
	
}