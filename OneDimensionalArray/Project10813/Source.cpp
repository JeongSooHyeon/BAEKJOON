/*
�� �ٲٱ�
*/
#include <iostream>
using namespace std;

int main(void) {
	int n = 0; // �ٱ��� ����
	int m = 0; // �� �ٲ� Ƚ��

	int arr[101]; // �ٱ��� �迭

	int input1, input2;
	int temp;

	cin >> n >> m;
	
	// �迭 �ʱ�ȭ
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		cin >> input1 >> input2;
		temp = arr[input1];
		arr[input1] = arr[input2];
		arr[input2] = temp;
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}
