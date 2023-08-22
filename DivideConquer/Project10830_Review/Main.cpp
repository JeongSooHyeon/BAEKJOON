#include <iostream>
using namespace std;

#define C 1000

int n;
int a[5][5];
int a2[5][5];
int result[5][5] = { {0,} };

void mult(int arr1[5][5], int arr2[5][5]) {	// µÎ Çà·Ä °öÇÏ±â

	for (int i = 0; i < n; i++) {	// 3 arow
		for (int j = 0; j < n; j++) {	// 3 bcol
			for (int w = 0; w < n; w++) {	// 2 bcol arow
				result[i][j] += (arr1[i][w] * arr2[w][j]) % C;
			}
		}
	}

	for (int i = 0; i < n; i++) {	
		for (int j = 0; j < n; j++) {	
			arr1[i][j] = result[i][j];
			}
		}
	}
}

void Power(int exp) {
	if (exp == 1) {
		mult()
	}

	int half = exp / 2;
	if (exp % 2 == 1) {	// È¦¼ö
		mult(a, a);
	}
	else {// Â¦¼ö
		mult(a2, a);
	}

	Power(half);
}

int main() {
	long long b;	// Áö¼ö
	cin >> n >> b;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			a2[i][j] = a[i][j];
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