#include <iostream>

using namespace std;

int arr[128][128];	// 흰:0, 파:1
int whiteCnt = 0, blueCnt = 0;

bool isAllSame(int row, int col, int cnt) {
	int temp = arr[row][col];
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			if (arr[row+i][col+j] != temp) {
				return false;
			}
		}
	}
	return true;
}

void solve(int row, int col, int cnt) {
	if (cnt==1|| isAllSame(row, col, cnt)) {	// n이 1이거나, 모두 같은 색
		if (arr[row][col] == 0) {	// 흰색
			whiteCnt++;
		}
		else if (arr[row][col] == 1) {	// 파란색
			blueCnt++;
		}
		return;
	}

	int half = cnt / 2;
	solve(row, col, half);
	solve(row + half, col, half);
	solve(row, col + half, half);
	solve(row + half, col + half, half);

	return;
}


int main() {
	int n;	// 종이 한 변의 길이
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	solve(0, 0, n);
	cout << whiteCnt << endl << blueCnt;


	return 0;
}