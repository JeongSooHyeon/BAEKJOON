#include <iostream>
using namespace std;

int main(void) {
	int n = -1;
	cin >> n;

	int area = 100 * n;
	int** array = new int* [n];

	for (int i = 0; i < n; i++) {
		array[i] = new int[2];
		for (int j = 0; j < 2; j++) {
			cin >> array[i][j];
		}
	}

	int w, h;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			w = -1; h = -1;
			if ((array[i][0] <= array[j][0])
				&& (array[i][0] + 10 >= array[j][0])) {
				w = (array[i][0] + 10) - array[j][0];
			}
			else if ((array[i][0] >= array[j][0])
				&& (array[i][0] <= array[j][0] + 10)) {
				w = (array[j][0] + 10 - array[i][0]);
			}
			if ((array[i][1] <= array[j][1])
				&& (array[i][1] + 10 >= array[j][1])) {
				h = (array[i][1] + 10) - array[j][1];
			}
			else if ((array[i][1] >= array[j][1])
				&& (array[i][1] <= array[j][1] + 10)) {
				h = (array[j][1] + 10) - array[i][1];
			}
			if (w >= 0 && h >= 0)
				area -= (w * h);
		}
	}
	cout << area;
}

