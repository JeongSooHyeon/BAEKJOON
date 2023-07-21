#include <iostream>
#include <vector>
using namespace std;

int cnt_1 = 0, cnt0 = 0, cnt1 = 0;

bool isOne(vector<vector<int>>& v, int row, int col, int size) {
	int first = v[row][col];	// ù��° ��
	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (v[i][j] != first)
				return false;
		}
	}
	return true;
}
void countPaper(vector<vector<int>>& v, int row, int col, int size) {
	// ���� ��� : ��� �� �����̸�
	if (isOne(v, row, col, size))
	{
		if (v[row][col] == 0)
			cnt0++;
		else if (v[row][col] == -1)
			cnt_1++;
		else
			cnt1++;
		return;
	}

	int oneThird = size / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			countPaper(v, row + (i * oneThird), col + (j * oneThird), oneThird);
		}
	}
}

int main() {
	int n;	// ��ü ������ ���� 2,4,8,16,32,64,128
	// �� ĭ : 0, �Ķ� ĭ : 1
	// ��� : �߶��� �Ͼ� ������ ����, �Ķ� ������ ����

	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}

	countPaper(v, 0, 0, n);
	cout << cnt_1 << endl << cnt0 << endl << cnt1;

}