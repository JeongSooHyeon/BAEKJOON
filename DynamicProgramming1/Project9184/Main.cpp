/*
신나는 함수 실행
*/
#include <iostream>
#include <string.h>

using namespace std;
int cache[51][51][51];

int w(int a, int b, int c) {

	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}

	if (a > 20 || b > 20 || c > 20) {
		return w(20, 20, 20);
	}

	int& ret = cache[a][b][c];
	if (ret != -1)
		return cache[a][b][c];

	if (a < b && b < c) {
		return ret = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	}

	return ret = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

}

int main() {
	int a, b, c;
	memset(cache, -1, sizeof(cache));

	while (true) {
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c==-1) {
			break;
		}
		printf("w(%d, %d, %d) = ", a, b, c);
		cout << w(a, b, c) << endl;
	}

}


