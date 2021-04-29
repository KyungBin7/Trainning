#include "Web_browser.h"

Web_browser::Web_browser() {
	home_addr = "www.naver.com";

	head = new DoubleNode;
	head->web_addr = home_addr;
	head->next = head->back = NULL;

	current = head;
	cout << current->web_addr << endl;
}
Web_browser::~Web_browser() {
	delete_all(head);
}
void Web_browser::go(string addr) {
	DoubleNode* location;
	location = new DoubleNode;
	location->web_addr = addr;
	location->next = NULL;

	location->back = current;
	current->next = location;
	current = location;

	cout << current->web_addr << endl;
}
void Web_browser::forward() {
	if (current->next != NULL)
		current = current->next;
	cout << current->web_addr << endl;
}
void Web_browser::backward() {
	if (current->back != NULL)
		current = current->back;
	cout << current->web_addr << endl;
	}
void Web_browser::delete_all(DoubleNode* ptr) {
	DoubleNode* tmp;
	while (ptr != NULL) {
		tmp = ptr;
		ptr = ptr->next;
		delete tmp;
	}
}