#include "DoubleNode.h"

class Web_browser {
	string home_addr;
	DoubleNode* head;
	DoubleNode* current;

public: 
	Web_browser();
	~Web_browser();
	void go(string addr);
	void forward();
	void backward();
	void delete_all(DoubleNode* ptr);
};
