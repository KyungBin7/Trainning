#include <iostream>

using namespace std;

struct NodeType {
	int value;
	NodeType* next;
};

int main() {
	NodeType* head;
	head = new NodeType;

	head->value = 3;
	head->next = NULL;

	NodeType* tmp;
	tmp = new NodeType;
	tmp->value = 2;
	tmp->next = head;
	head=tmp;

	tmp = new NodeType;
	tmp->value = 1;
	tmp->next = head;
	head = tmp;
	
	cout << head->value << endl;
	cout << head->next->value << endl;
	cout << head->next->next->value << endl;
}