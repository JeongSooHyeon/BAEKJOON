/*
�� ��� - 7
*/
#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int num;

	for (int i = 0; i < 2 * n - 1; i++) {
		if (i < n)
			num = i;
		else
			num = 2 * n - 2 - i;

		for (int k = 0; k < n - num - 1; k++) { // ���� ����
			cout << ' ';
		}
		for (int w = 0; w < 2 * num + 1; w++) // �� ����
			cout << '*';

		cout << endl;
	}

	return 0;
}