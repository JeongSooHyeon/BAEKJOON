#include <iostream>
#include <vector>
using namespace std;

int whiteCnt = 0, blueCnt = 0;

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
void makeColoredPaper(vector<vector<int>>& v, int row, int col, int size) {
	// ���� ��� : ��� �� �����̸�
	if (isOne(v, row, col, size))	
	{
		if (v[row][col])	// �Ķ� ��
			blueCnt++;
		else
			whiteCnt++;
		return;
	}

	int half = size / 2;
	makeColoredPaper(v, row, col, half);
	makeColoredPaper(v, row, col+half, half);
	makeColoredPaper(v, row+half, col, half);
	makeColoredPaper(v, row+half, col+half, half);

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

	makeColoredPaper(v, 0, 0, n);
	cout << whiteCnt << '\n' << blueCnt;

}