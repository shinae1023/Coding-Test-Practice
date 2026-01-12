#include <iostream>
#include <string>
using namespace std;

struct node {
	char s;
	node* prev=NULL;
	node* next=NULL;
};

int main() {
	string str;
	cin >> str;
	str = " " + str; //" " 는 커서가 맨 앞일때 가리키는 글자
	int n; cin >> n;

	node* list = new node[str.length()]; //문장 길이만큼 노드생성

	for (int i = 0; i < str.length(); i++) {
		list[i].s = str[i]; //데이터 입력
	}

	node* pointer = list;
	for (int i = 0; i < str.length(); i++) { //연결리스트 생성
		if (i < str.length() - 1) list[i + 1].prev = pointer;
		pointer++;
		list[i].next = pointer;
		if (i == str.length() - 1) list[i].next = NULL;
	}
	pointer--; // 현재 커서 위치
	
	while (n--) {
		string order; cin >> order;
		if (order == "L") {
			if (pointer == list) continue; //맨 앞이면 무시
			pointer = pointer->prev; // 포인터 뒤로 이동
		}
		else if (order == "D"){
			if (pointer->next == NULL) continue; // 맨 뒤면 무시
			pointer = pointer->next;
		}
		else if (order == "B") {
			if (pointer == list) continue;
			node* del = pointer;
			pointer = del->prev;
			if (pointer) // 포인터가 NULL이 아니면
				pointer->next = del->next;
			if (del->next) // 삭제할 노드의 다음 노드가 NULL이 아니면
				del->next->prev = pointer; // 다음 노드의 prev를 현재 포인터로 설정
		}
		else  {
			char x; cin >> x;
			node* new_node = (node*)malloc(sizeof(node));
			new_node->s = x;
			new_node->prev = pointer;
			new_node->next = pointer->next;
			if (pointer->next) // 포인터의 다음 노드가 NULL이 아니면
				pointer->next->prev = new_node; // 그 노드의 prev를 새 노드로 설정
			pointer->next = new_node;
			pointer = new_node;
		}
	}

	pointer =list->next; //커서 맨 앞으로

	while (pointer != NULL) {
		cout << pointer->s;
		pointer=pointer->next;
	}
}