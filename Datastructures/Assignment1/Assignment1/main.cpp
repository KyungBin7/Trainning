#include "stack.h"
#include <iostream>

using namespace std;

int main() {
	Stack s;
	Stack c;
	bool balanced = true;
	char symbol;
	int count=1;


	while (cin.get(symbol) && balanced) {
		if (symbol == '\n')
			count++;
		if (symbol == '(') {
			s.push(symbol);
			c.push(count);
		}
		if (symbol == '[') {
			s.push(symbol);
			c.push(count);
		}
		if (symbol == '{') {
			s.push(symbol);
			c.push(count);
		}
		else if (symbol == ')') {
			if (s.is_empty()) {
				cout << "error1 at line " << count << endl;
				
			}
			else if (s.peek() != '(') {
				cout << "error1 at line " << count << endl;
				
			}
			else {
				balanced == true;
				s.pop();
				c.pop();
			}
		}
		else if (symbol == ']') {
			if (s.is_empty()) {
				c.push(count);
				cout << "error2 at line " << c.pop() << endl;
				
			}
			else if (s.peek() != '[') {
				c.push(count);
				cout << "error2 at line " << c.pop() << endl;
				
			}
			else {
				balanced == true;
				s.pop();
				c.pop();
			}
		}
		else if (symbol == '}') {
			if (s.is_empty()) {
				c.push(count);
				cout << "error3 at line " << c.pop() << endl;
				
			}
			else if (s.peek() != '{') {
				c.push(count);
				cout << "error3 at line " << c.pop() << endl;
				
			}
			else {
				balanced == true;
				s.pop();
				c.pop();
			}
		}
	}
	if (s.is_empty())
		cout << 1 << endl;
	else {
		if (s.peek() == '(') {
			c.push(count);
			cout << "error4 at line " << c.pop() << endl;
			return 0;
		}
		else if (s.peek() == '[') {
			c.push(count);
			cout << "error5 at line " << c.pop() << endl;
			return 0;
		}
		else {
			c.push(count);
			cout << "error6 at line " << c.pop() << endl;
			return 0;
		}
	}
	return 0;
}