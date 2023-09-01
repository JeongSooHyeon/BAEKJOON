#include <iostream>
#include <vector>
using namespace std;

// 거스름돈 <= $5.00
// 동전의 개수 최소화
// Quarter : 0.25, Dime : 0.10, Nickel : 0.05, Penny : 0.01

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;


void Calc(int c, vector<int>& result) {
	if (c / QUARTER != 0) {
		result[0] += c / QUARTER;
		c %= QUARTER;
	}
	if (c / DIME != 0) {
		result[1] += c / DIME;
		c %= DIME;
	}
	if (c / NICKEL != 0) {
		result[2] += c / NICKEL;
		c %= NICKEL;
	}
	if (c / PENNY != 0) {
		result[3] += c / PENNY;
		c %= PENNY;
	}
}

int main() {
	int t;	// 테스트 케이스
	int c=-1;	// 거스름돈, 센트, 1 <= c <= 500
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> c;
		vector<int> result(4, 0);

		Calc(c, result);

		for (int j = 0; j < 4; j++) {
			cout << result[j] << ' ';
		}
		cout << endl;

	}
	return 0;
}