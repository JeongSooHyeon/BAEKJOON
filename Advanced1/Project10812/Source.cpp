/*
바구니 순서 바꾸기
*/
#include <iostream>
using namespace std;

int main(void) {
	int n = -1; // 바구니 갯수
	int m = -1; // 회전 횟수
	int arr[101]; // 바구니
	int i, j, k;
	int rot[101]; // 회전 배열
	int ridx = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) { // 바구니 초기화
		arr[i] = i;
	}

	for (int w = 0; w < m; w++) {
		cin >> i >> j >> k;
		
		for (int z = k; z <= j; z++) { // mid~end
			rot[ridx++] = arr[z];
		}
		for (int z = i; z < k; z++) { // begin~mid-1
			rot[ridx++] = arr[z];
		}
		for (int z = i; z <= j; z++) { // 바뀐 부분 끼워넣기
			arr[z] = rot[z-i];
		}		
		ridx = 0;
	}

	for (int z = 1; z <= n; z++) {
		cout << arr[z] << ' ';
	}
	return 0;
}
