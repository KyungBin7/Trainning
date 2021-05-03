#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
	top = -1;
}
Stack::~Stack() {}
bool Stack::is_empty() {
	return top == -1;
}
bool Stack::is_full() {
	return top == MAX_STACK_SIZE - 1;
}
void Stack::push(itemtype item) {
	if (is_full()) {
		cout << "���� ��ȭ����" << endl;
		exit(1);
	}
	else
		data[++top] = item;
}
itemtype Stack::pop() {
	if (is_empty()) {
		cout << "�� �����Դϴ�" << endl;
		exit(1);
	}
	else
		return data[top--];
}
itemtype Stack::peek() {
	return data[top];
}
