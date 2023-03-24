/*
공 바꾸기
*/
#include <iostream>
using namespace std;

int main(void) {
	int n = 0; // 바구니 개수
	int m = 0; // 공 바꿀 횟수

	int arr[101]; // 바구니 배열

	int input1, input2;
	int temp;

	cin >> n >> m;
	
	// 배열 초기화
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		cin >> input1 >> input2;
		temp = arr[input1];
		arr[input1] = arr[input2];
		arr[input2] = temp;
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}
