#include <iostream>
#include <vector>
using namespace std;

int cnt_1 = 0, cnt0 = 0;

bool isOne(vector<vector<int>>& v, int row, int col, int size) {
	int first = v[row][col];	// ù��° ��
	for (int i = row; i < row+size; i++) {
		for (int j = col; j < col+ size; j++) {
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
		if (v[row][col])	// �Ķ� ��
			cnt0++;
		else
			cnt_1++;
		return;
	}

	int half = size / 2;
	countPaper(v, row, col, half);
	countPaper(v, row, col+half, half);
	countPaper(v, row+half, col, half);
	countPaper(v, row+half, col+half, half);

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
	cout << cnt_1 << '\n' << cnt0;

}