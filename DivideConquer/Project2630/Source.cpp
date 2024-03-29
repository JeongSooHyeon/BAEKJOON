#include <iostream>
#include <vector>
using namespace std;

int cnt_1 = 0, cnt0 = 0;

bool isOne(vector<vector<int>>& v, int row, int col, int size) {
	int first = v[row][col];	// 첫번째 색
	for (int i = row; i < row+size; i++) {
		for (int j = col; j < col+ size; j++) {
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
		if (v[row][col])	// 파란 색
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
	cout << cnt_1 << '\n' << cnt0;

}