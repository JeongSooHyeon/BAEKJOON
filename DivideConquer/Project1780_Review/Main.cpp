#include <iostream>

using namespace std;

int arr[2187][2187];
int cntM1 = 0, cnt0 = 0, cnt1 = 0;

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

void solve(int row, int col, int cnt) {
	if (cnt == 1 || isOne(row, col, cnt)) {
		if (arr[row][col] == -1)
			cntM1++;
		else if (arr[row][col] == 0)
			cnt0++;
		else if (arr[row][col] == 1)
			cnt1++;
		return;
	}

	int oneThree = cnt / 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			solve(row + i * oneThree, col + j * oneThree, oneThree);
		}
	}

	return;
}

int main() {
	int n;	// 3ÀÇ ¹è¼ö 3~2187
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	solve(0, 0, n);
	cout << cntM1 << '\n' << cnt0 << '\n' << cnt1;

	return 0;
}