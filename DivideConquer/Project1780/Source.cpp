#include <iostream>
#include <vector>
using namespace std;

int cnt_1 = 0, cnt0 = 0, cnt1 = 0;

bool isOne(vector<vector<int>>& v, int row, int col, int size) {
	int first = v[row][col];	// 첫번째 색
	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (v[i][j] != first)
				return false;
		}
	}
	return true;
}
void countPaper(vector<vector<int>>& v, int row, int col, int size) {
	// 기저 사례 : 모두 한 색상이면
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
	int n;	// 전체 종이의 길이 2,4,8,16,32,64,128
	// 흰 칸 : 0, 파란 칸 : 1
	// 출력 : 잘라진 하얀 색종이 개수, 파란 색종이 개수

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