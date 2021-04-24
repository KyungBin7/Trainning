#include <cstdlib>
using namespace std;
#define MAX_QUEUE_SIZE 100
typedef int itemtype;
class Queue {
public:
	Queue();
	bool is_empty();
	bool is_full();
	void enqueue(itemtype item);
	itemtype dequeue();
	itemtype peek();
	void display();

protected:
	int front;
	int rear;
	int data[MAX_QUEUE_SIZE];
};