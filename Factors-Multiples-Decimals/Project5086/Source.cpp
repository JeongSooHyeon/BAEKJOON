/*
����� ���
*/

#include <iostream>
using namespace std;

void solve(int n1, int n2) {
	if (n1 / n2 != 0) {
		if (n1 % n2 == 0) {
			cout << "multiple" << endl;	// ���
			return;
		}
	}
	else if (n2 / n1 != 0) {
		if (n2 % n1 == 0) {
			cout << "factor" << endl;	// ���
			return;
		}
	}
	cout << "neither" << endl;
}

int main() {
	int n1, n2;

	while (true) {
		cin >> n1 >> n2;
		if (n1 == 0 && n2 == 0) {
			break;
		}
		solve(n1, n2);
	}


	return 0;
}