#include "Queue.h"
#include<cstdio>
#include<cstdlib>
#include<iostream>
#define MAX_QUEUE_SIZE 100
typedef int itemtype;
class Deque : public Queue {
public:
	Deque() {}
	void addRear(itemtype item) { enqueue(item); }
	itemtype deleteFront() { return dequeue(); }
	itemtype gerFront() { return peek(); }
	void addFront(itemtype item) {
		if (is_full()) {
			cout << "덱이 포화상태입니다\n";
			exit(1);
		}
		else {
			data[front] = item;
			front = (front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
		}
	}
	itemtype deleteRear() {
		if (is_empty()) {
			cout << "공백상태입니다\n";
			exit(1);
		}
		else {
			itemtype ret = data[rear];
			rear = (rear -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
			return ret;
		}
	}
	itemtype getRear() {
		if (is_empty()) {
		cout << "공백입니다\n";
		exit(1);
		}
		else 
			return data[rear];
	}
	void display() {
		cout << "덱의 내용 : \n"; // 이 출력 코드만 다름
		int length = (rear - front > 0) ? rear - front : (rear - front) + MAX_QUEUE_SIZE;
		for (int i = front + 1; i <= front + 1 + length; i++)
			cout << "< " << data[i % MAX_QUEUE_SIZE] << " > ";
		cout << "\n";
	}
};