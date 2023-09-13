/*
대지
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int w, h;
	int x, y;	// 옥구슬의 위치
	int minX=100000, maxX=-100000;
	int minY=100000, maxY=-100000;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		if (minX > x)
			minX = x;
		if (minY > y)
			minY = y;
		if (maxX < x)
			maxX = x;
		if (maxY < y)
			maxY = y;
		//minX = minX > x ? x : minX;
		//minY = minY > y ? y : minY;
		//maxX = maxX < x ? x : maxX;
		//maxY = maxY < y ? y : maxY;
	}
	
	cout << (maxX - minX) * (maxY - minY);

	return 0;
}