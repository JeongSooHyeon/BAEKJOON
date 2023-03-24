/*
바구니 뒤집기
*/
#include <iostream>
using namespace std;

int main(void) {
	int n; // 바구니 개수
	int m; // 바꿀 횟수

	int arr[101];

	int i, j; // 바꿀 번호
	int temp;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int w = 0; w < m; w++) {
		cin >> i >> j;
		for (int k = i; k < j; k++, j--) {
			temp = arr[k];
			arr[k] = arr[j];
			arr[j] = temp;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}
