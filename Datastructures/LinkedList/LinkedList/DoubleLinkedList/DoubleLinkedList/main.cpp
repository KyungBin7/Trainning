#include "Web_browser.h"
#include <iostream>

using namespace std;

int main() {
	Web_browser wb;
	string addr;
	string command;

	while (1) {
		cin >> command;
		if (command == "exit")
			break;
		if (command == "go") {
			cin >> addr;
			wb.go(addr);
		}
		else if (command == "forward")
			wb.forward();
		else if (command == "backward")
			wb.backward();
	}
	return 0;
}