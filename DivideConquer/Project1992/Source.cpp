#include <iostream>
#include <vector>
using namespace std;

bool isOne(vector<string>& v, int row, int col, int size) {
	int first = v[row][col];	// ù��° ��
	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (v[i][j] != first)
				return false;
		}
	}
	return true;
}

void quadTree(vector<string>& v, int row, int col, int size) {


	// ���� ��� : ��� ���� ���� ��
	if (isOne(v, row, col, size)) {
		if (v[row][col] == '1') {	// ������
			cout << 1;
		}
		else
			cout << 0;
		return;

	}

	int half = size / 2;
	cout << '(';
	quadTree(v, row, col, half);
	quadTree(v, row, col + half, half);
	quadTree(v, row + half, col, half);
	quadTree(v, row + half, col + half, half);
	cout << ')';

}

int main() {
	int n;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	quadTree(v, 0, 0, n);
}