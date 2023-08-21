#include <iostream>

using namespace std;

int arr[64][64];

bool isOne(int row, int col, int cnt) {
	int temp = arr[row][col];
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			if (arr[row + i][col + j] != temp) {
				return false;
			}
		}
	}
	return true;
}

void QuadTree(int row, int col, int cnt) {

	if (cnt==1 || isOne(row, col, cnt)) {
		cout << arr[row][col];
		return;
	}
	cout << '(';

	int half = cnt / 2;
	QuadTree(row, col, half);
	QuadTree(row, col + half, half);
	QuadTree(row+half, col, half);
	QuadTree(row+half, col+half, half);

	cout << ')';

	return;
}

int main() {
	int n;
	cin >> n;

	string str[64];

	for (int i = 0; i < n; i++) {
			cin >> str[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = str[i][j] - '0';
		}
	}

	QuadTree(0, 0, n);


	return 0;
}