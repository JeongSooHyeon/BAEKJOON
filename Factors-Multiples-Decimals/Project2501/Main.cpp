/*
약수 구하기
*/

#include <iostream>
using namespace std;

int solve(int n1, int n2) {
	int factor = 1;
	int cnt = 0;
	while (true) {
		if (n1 < factor)
			return 0;
		if (n1 % factor == 0) {
			cnt++;
		}
		if (cnt == n2) {
			return factor;
		}
		factor++;
	}

}

int main() {
	int n1, n2;

		cin >> n1 >> n2;
		cout << solve(n1, n2);


	return 0;
}