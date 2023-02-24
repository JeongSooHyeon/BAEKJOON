/*
영수증
*/
#include <iostream>
using namespace std;

bool isCorrectCal(int sum, int num) {
	int price, n;
	int result = 0;
	for (int i = 0; i < num; i++) {
		cin >> price >> n;
		result += price * n;
	}
	if (sum == result)
		return true;
	return false;
}
int main(void) {
	int x; // 총 금액
	int n; // 물건의 종류 수

	cin >> x;
	cin >> n;

	if (isCorrectCal(x, n))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
