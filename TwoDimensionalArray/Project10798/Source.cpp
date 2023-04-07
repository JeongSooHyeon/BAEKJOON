/*
세로읽기
*/
#include <iostream>
#include <algorithm>
using namespace std;

int  main(void) {
	char arr[5][16];
	int cnt = 0;
	char ch;

	fill_n(&arr[0][0], 5*16, -1);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 16; j++) {
			ch = cin.get();

			if (ch == '\n') {
				break;
			}
			arr[i][j] = ch;
		}
	}
	for (int j = 0; j < 15; j++) {
		cnt = 0;
		for (int i = 0; i < 5; i++) {
			if ((arr[i][j] >= 'a' && arr[i][j] <= 'z')
				|| (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
				|| ((arr[i][j] - '0') >= 0 && (arr[i][j] - '0') <= 9)) {
				if(arr[i][j] != '\0')
				cout << arr[i][j];
			}
			else {
				cnt++;
				continue;
			}
		}
		if (cnt >= 5)
			break;
	}

	return 0;
}