﻿#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	if (a < 0) {
		cout << "OTR" << endl;
	}
	else if (a > 0) {
		cout << "POL" << endl;
	}
	else {
		cout << "NUL" << endl;
	}
	return 0;

}