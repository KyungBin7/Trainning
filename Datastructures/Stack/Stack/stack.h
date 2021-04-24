#ifndef STACK_H_
#define STACK_H_

const int MAX_STACK_SIZE = 100;
typedef int itemtype;

class Stack {
	int top;
	itemtype data[MAX_STACK_SIZE];

public:
	Stack();
	~Stack();
	bool is_empty();
	bool is_full();
	void push(itemtype item);
	itemtype pop();
	itemtype peek();
};

#endif /* STACK_H_ */#pragma once
