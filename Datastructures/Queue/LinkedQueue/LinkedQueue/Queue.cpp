#include "Queue.h"
#include <cstdio>
#include<iostream>
using namespace std;
typedef int itemtype;
Queue::Queue() {
	front = NULL;
	rear = NULL;
}
bool Queue::is_empty() {
	return front == NULL;
}
void Queue::enqueue(itemtype item) {
	Node* newNode;
	newNode = new Node;
	newNode->info = item;
	newNode->next = NULL;
	if (front == NULL)
		front = newNode;
	else
		rear->next = newNode;
	rear = newNode;
}
itemtype Queue::dequeue() {
	if (is_empty()) {
		cout << "큐가 비어있습니다" << endl;
		exit(1);
	}
	else {
		Node* tmpPtr;
		itemtype item;

		tmpPtr = front;
		item = front->info;
		front = front->next;
		if (front == NULL)
			rear=NULL;
		delete tmpPtr;
		return item;
	}
}
itemtype Queue::peek() {
	if (is_empty()) {
		cout << "큐가 비어있습니다" << endl;
		exit(1);
	}
	else 
		return front->info;
	
}
void Queue::display() {
	Node* tmpPtr;
	tmpPtr = front;
	while (tmpPtr != NULL) {
		cout << tmpPtr->info << " ";
		tmpPtr=tmpPtr->next;
	}
	cout << "\n";
}