/*
개수 세기
*/
#include <iostream>
using namespace std;

int main(void) {
	int n;
	int arr[100];
	int findNum;
	int result = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> findNum;

	for (int i = 0; i < n; i++) {
		if (findNum == arr[i])
			result++;
	}

	cout << result;

	return 0;
}
