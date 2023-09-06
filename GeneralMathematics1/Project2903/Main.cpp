/*
일반 수학1 - 중앙 이동 알고리즘
*/

#include <iostream>
using namespace std;

void solve(int n) {
	int cnt = 0;
	int result = 2;
	int ret;
	while (true) {
		if (cnt == n) {
			cout << ret;
			break;
		}

		result += result - 1;
		ret = result * result;

		cnt++;
	}
}


int main() {
	int n;	// 1 <= n <= 15
	cin >> n;
	// 1 3 5 9 17 33 

	solve(n);
	return 0;
}