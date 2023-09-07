/*
직사각형에서 탈출
*/
#include <iostream>
using namespace std;

void solve(int x, int y, int w, int h) {
	int xw = w - x;
	int yh = h - y;
	int min1 = xw, min2 = x;


	if (xw > yh) {
		min1 = yh;
	}

	if (x > y) {
		min2 = y;
	}


	if (min1 > min2) {
		cout << min2;
	}
	else {
		cout << min1;
	}
}

int main() {
	int x, y;
	int w, h;
	cin >> x >> y;
	cin >> w >> h;

	solve(x, y, w, h);
	


	return 0;
}