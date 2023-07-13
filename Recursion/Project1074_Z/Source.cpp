#include <iostream>
#include <cmath>
using namespace std;

/*
�� ���� : �� ĭ �湮(z���)
���� ��� : r�� c���� ��, �� ���� �湮����
���� ���� : 
*/
int n, r, c;	// 1<=n<=15, 0<=r,c<=2^n
bool found = false;
/*
i,j i,j+1 i+1,j i+1,j+1
*/
int tempCoordi[4][2] = { {0,0}, {0,1}, {1,0}, {1,1} };

int solve(int row, int col, int num) {
	long long int ret = 0;
	long long int tempRow, tempCol;
	if (num == 0) {
		return 0;
	}


	for (int i = 0; i < 4; i++) {
		tempRow = row + tempCoordi[i][0] * (int)pow(2, num-1);
		tempCol = col + tempCoordi[i][1] * (int)pow(2, num-1);
		if (num == 1) {

			ret++;
			if (r == tempRow && c == tempCol) {	// ã��
				cout << "ã��" << ret << endl;
				return ret;
			}
		}
		ret += solve(tempRow, tempCol, num-1);
	}
	return ret;
}

int main() {
	cin >> n >> r >> c;
	cout << solve(0, 0, n)-1;

}