/*
�ٱ��� ���� �ٲٱ�
*/
#include <iostream>
using namespace std;

int main(void) {
	int n = -1; // �ٱ��� ����
	int m = -1; // ȸ�� Ƚ��
	int arr[101]; // �ٱ���
	int i, j, k;
	int rot[101]; // ȸ�� �迭
	int ridx = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) { // �ٱ��� �ʱ�ȭ
		arr[i] = i;
	}

	for (int w = 0; w < m; w++) {
		cin >> i >> j >> k;
		
		for (int z = k; z <= j; z++) { // mid~end
			rot[ridx++] = arr[z];
		}
		for (int z = i; z < k; z++) { // begin~mid-1
			rot[ridx++] = arr[z];
		}
		for (int z = i; z <= j; z++) { // �ٲ� �κ� �����ֱ�
			arr[z] = rot[z-i];
		}		
		ridx = 0;
	}

	for (int z = 1; z <= n; z++) {
		cout << arr[z] << ' ';
	}
	return 0;
}
