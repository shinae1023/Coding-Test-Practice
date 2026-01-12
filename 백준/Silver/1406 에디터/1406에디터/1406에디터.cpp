#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*
* 스택에 글자 순서대로 넣음
* 커서 왼쪽으로 옮기면 pop 후 다른 스택에 저장
* 오른쪽으로 옮기면 다른 스택에 있는 글자 pop
* 삭제 = pop
* 추가 = push
*/
int main()
{
    string s; //초기 문장
    cin >> s;

    stack<char>stc;
    stack<char>stc2;

    for (int i = 0; i < s.length(); i++) { //문자열 push
        stc.push(s[i]);
    } // abcd
    int n; cin >> n;

    while (n--) {
        string order;  cin >> order;

        if (order == "P") { 
            char add_str; //추가 문자
            cin >> add_str;
            stc.push(add_str);
        }
        else if (order == "L") {
            if (stc.empty()) continue; //커서 맨 왼쪽
            stc2.push(stc.top());
            stc.pop();
        }
        else if(order == "D"){
            if (stc2.empty()) continue;
            //커서 맨 오른쪽
            stc.push(stc2.top());
            stc2.pop();
        }
        else { // order == B
            if (stc.empty()) continue;
            stc.pop();
        }
    }
    while (!stc.empty()) {
        stc2.push(stc.top());
        stc.pop();
    }


    while (!stc2.empty()) {
        cout << stc2.top();
        stc2.pop();
    }
}

