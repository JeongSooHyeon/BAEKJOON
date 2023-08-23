#include <iostream>
using namespace std;

#define C 1000

int n;
int a[5][5];
int result[5][5] = { {0,} };

// �� ��� ���ϱ�
void mult(int arr1[5][5], int arr2[5][5]) {	
	int temp[5][5] = { {0,} };

	for (int i = 0; i < n; i++) {	// 3 arow
		for (int j = 0; j < n; j++) {	// 3 bcol
			for (int w = 0; w < n; w++) {	// 2 bcol arow
				temp[i][j] += arr1[i][w] * arr2[w][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr1[i][j] = temp[i][j] % C;
		}
	}
}

void Power(long long exp) {
	if (exp % 2 == 1) {	// Ȧ��
		mult(result, a);
		if (exp == 1)	// ������ 1�̸� ����
			return;
	}
	mult(a, a);

	Power(exp/2);
}

int main() {
	long long b;	// ����
	cin >> n >> b;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
		result[i][i] = 1;	// �׵����
	}

	Power(b);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << result[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}