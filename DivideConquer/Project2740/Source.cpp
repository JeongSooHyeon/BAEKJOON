#include <iostream>
#include <vector>
using namespace std;

int n, m;	// 행렬 a의 크기
int  k;	// 행렬 b의 크기

void multi(vector<vector<int>> &a, vector<vector<int>> &b, vector<vector<int>> &c, int row) {
	if (row == n)
		return;
	for (int col = 0; col < k; col++) {
		for (int i = 0; i < m; i++) {
			c[row][col] += a[row][i] * b[i][col];
		}
	}
	multi(a,b,c,++row);
}

int main() {
	cin >> n >> m;

	vector<vector<int>> a(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	cin >> m >> k;
	vector<vector<int>> b(m, vector<int>(k));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	vector<vector<int>> c(n, vector<int>(k));
	multi(a, b, c, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}

}