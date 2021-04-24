#include "Queue.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Queue::Queue()
{
	front = rear = 0;
}
bool Queue::is_empty() {
	return front == rear;
}
bool Queue::is_full() {
	return front == (rear + 1) % MAX_QUEUE_SIZE;
}
void Queue::enqueue(itemtype item) {
	if (is_full()) {
		cout << "ť�� ��ȭ�����Դϴ�\n";
		exit(1);
	}
	else {
		rear = (rear + 1) % MAX_QUEUE_SIZE;
		data[rear] = item;
	}
}
itemtype Queue::dequeue() {
	if (is_empty()) {
		cout << "��ť�Դϴ�\n";
		exit(1);
	}
	else {
		front = (front + 1) % MAX_QUEUE_SIZE;
		return data[front];
	}
}
itemtype Queue::peek() {
	if (is_empty()) {
		cout << "��ť�Դϴ�\n";
		exit(1);
	}
	else
		return data[(front + 1) % MAX_QUEUE_SIZE];
	
}
void Queue::display() {
	cout << "ť���� : ";
	int length = (rear - front > 0) ? rear - front : (rear - front) + MAX_QUEUE_SIZE;
	for (int i = front + 1; i < front + 1 + length; i++)
		cout << "<" << data[i % MAX_QUEUE_SIZE] << ">";
	cout << "\n";
}