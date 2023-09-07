/*
네 번째 점
*/
#include <iostream>
using namespace std;

void solve(int x, int y, int w, int h) {

}

int main() {
	int x1, x2, x3;
	int y1, y2, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	int x = x1, y = y1;

	if (x1 == x2) {
		x = x3;

	}
	else if (x1 == x3) {
		x = x2;
	}

	if (y1 == y2) {
		y = y3;
	}
	else if (y1 == y3) {
		y = y2;
	}

	cout << x << ' ' << y;


	return 0;
}