#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* p;
	p = new int[n];

	for (int i = 0; i < n; i++) {
		p[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		cout << p[i] << endl;
	}
	delete[] p;

	return 0;
}
