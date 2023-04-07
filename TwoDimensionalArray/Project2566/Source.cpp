/*
ÃÖ´ñ°ª
*/

#include <iostream>
using namespace std;

int main(void) {
	int arr[9][9];
	int max = 0;
	int idx1, idx2;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (max <= arr[i][j]) {
				max = arr[i][j];
				idx1 = i+1; idx2 = j+1;
			}
		}
	}

	cout << max << endl << idx1 << ' ' << idx2;

	return 0;
}