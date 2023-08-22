#include <iostream>
using namespace std;

int n, m, k;	// <= 100	Çà,·Ä,·Ä
int a[100][100];
int b[100][100];
int result[100][100] = { {0,} };

void power() {

	for (int i = 0; i < n; i++) {	// 3 arow
		for (int j = 0; j < k; j++) {	// 3 bcol
			for (int w = 0; w < m; w++) {	// 2 bcol arow
				result[i][j] += a[i][w] * b[w][j];
			}
		}
	}

}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	power();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << result[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}