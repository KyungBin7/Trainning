#include "stack.h"
#include <iostream>

using namespace std;

int main() {
	Stack s;

	bool balanced = true;
	char symbol;
	char open_symbol;

	while (cin.get(symbol) && balanced) {
		if (symbol == '(')
			s.push(symbol);
		else if (symbol == ')') {
			if (s.is_empty())
				balanced = false;
			else {
				open_symbol = s.pop();
				balanced = (open_symbol == '(' && symbol == ')');
			}
		}
	}
	if (!balanced)
		cout << "unbalanced" << endl;
	else if (s.is_empty())
		cout << "balanced" << endl;
	else
		cout << "unbalanced" << endl;
}