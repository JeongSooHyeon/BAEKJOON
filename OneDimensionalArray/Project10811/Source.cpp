/*
�ٱ��� ������
*/
#include <iostream>
using namespace std;

int main(void) {
	int n; // �ٱ��� ����
	int m; // �ٲ� Ƚ��

	int arr[101];

	int i, j; // �ٲ� ��ȣ
	int temp;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int w = 0; w < m; w++) {
		cin >> i >> j;
		for (int k = i; k < j; k++, j--) {
			temp = arr[k];
			arr[k] = arr[j];
			arr[j] = temp;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}
