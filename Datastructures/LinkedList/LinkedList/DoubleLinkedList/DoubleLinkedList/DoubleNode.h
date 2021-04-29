#ifndef DOUBLENODE_H_
#define DOUBLENODE_H_
#include <iostream>

using namespace std;

struct DoubleNode {
	string web_addr;
	DoubleNode* next;
	DoubleNode* back;
};

#endif 
