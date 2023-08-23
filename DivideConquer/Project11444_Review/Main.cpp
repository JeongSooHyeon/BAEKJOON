#include <iostream>
#include <vector>
using namespace std;

#define C 1000000007
long long arr[2][2] = { {1,1},{1,0} };
long long result[2][2] = { {1,0},{0,1} };

// µÎ Çà·Ä °öÇÏ±â
void mult(long long arr1[2][2], long long arr2[2][2]) {
	long long temp[2][2] = { {0,} };

	for (int i = 0; i < 2; i++) {	// 3 arow
		for (int j = 0; j < 2; j++) {	// 3 bcol
			for (int w = 0; w < 2; w++) {	// 2 bcol arow
				temp[i][j] += arr1[i][w] * arr2[w][j];
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			arr1[i][j] = temp[i][j] % C;
		}
	}
}

void Fibonacci(long long n) {
	if (n % 2 == 1) {	// È¦¼ö
		mult(result, arr);
		if (n == 1)
			return;
	}

	mult(arr, arr);
	Fibonacci(n / 2);
}

int main() {
	long long n;	// <= 1,000,000,000,000,000,000
	cin >> n;

	Fibonacci(n);

	cout << result[1][0];
	return 0;
}