/*
���� �� ���� ��..?
*/
#include <iostream>
using namespace std;

int main(void) {
	int arr[31];
	int n; // ������ ��ȣ

	for (int i = 1; i <= 30; i++) {
		arr[i] = -1;
	}

	for (int i = 0; i < 28; i++) {
		cin >> n;
		arr[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] != 1)
			cout << i << endl;
	}
	return 0;
}
