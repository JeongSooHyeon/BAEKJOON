/*
�� �ֱ�
*/
#include <iostream>
using namespace std;

void ballGame(int arr[], int i, int j, int k) {
	for (int a = i; a <= j; a++) {
		arr[a] = k;
	}
}
void showArr(int arr[], int n) {
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
}
int main(void) {
	int n, m; // �ٱ��� ����, �� �ִ� Ƚ��
	int arr[100];
	int i, j, k;

	cin >> n >> m;

	for (int a = 1; a <= n; a++) {
		arr[a] = 0;
	}

	for (int a = 0; a < m; a++) {
		cin >> i >> j >> k;
		ballGame(arr, i, j, k);
	}

	showArr(arr, n);
	return 0;
}
