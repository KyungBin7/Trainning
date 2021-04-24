#include <cstdlib>
using namespace std;
#define MAX_QUEUE_SIZE 100
typedef int itemtype;
struct Node {
	itemtype info;
	Node* next;
};
class Queue {
public:
	Queue();
	bool is_empty();
	bool is_full();
	void enqueue(itemtype item);
	itemtype dequeue();
	itemtype peek();
	void display();

private:
	Node *front;
	Node *rear;
};
