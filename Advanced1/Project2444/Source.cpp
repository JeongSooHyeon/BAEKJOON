/*
º° Âï±â - 7
*/
#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int num;

	for (int i = 0; i < 2 * n - 1; i++) {
		if (i < n)
			num = i;
		else
			num = 2 * n - 2 - i;

		for (int k = 0; k < n - num - 1; k++) { // °ø¹é °¹¼ö
			cout << ' ';
		}
		for (int w = 0; w < 2 * num + 1; w++) // º° °¹¼ö
			cout << '*';

		cout << endl;
	}

	return 0;
}