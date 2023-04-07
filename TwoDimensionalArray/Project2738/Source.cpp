/*
행렬 덧셈
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	int** array1 = new int* [n];
	int** array2 = new int* [n];

	for (int i = 0; i < n; i++) {
		array1[i] = new int[m];
		array2[i] = new int[m];
		//fill_n(array[i], m, 0); // 시작주소, 몇개, 넣을값
		for (int j = 0; j < m; j++) {
			cin >> array1[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array2[i][j];
		}

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array1[i][j] + array2[i][j] << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] array1[i];
		delete[] array2[i];
	}

	delete[] array1;
	delete[] array2;

	return 0;
}