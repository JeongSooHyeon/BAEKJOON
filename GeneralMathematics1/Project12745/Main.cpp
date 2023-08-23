/*
일반 수학1 - 진법 변환
*/

#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int convert(char ch) {
	if (isdigit(ch))
		return ch-'0';
	int ret = 10;
	for (char i = 'A'; i <= 'Z'; i++) {
		if (ch == i)
			break;
		ret++;
	}
	return ret;
}
int main() {
	string n;	// <= 10억
	int b = -1;	// 2 <= b <= 36
	long long result = 0;
	cin >> n >> b;

	for (string::size_type i = 0; i < n.size(); i++) {
		result += convert(n[i]) * pow(b, n.size() - i - 1);
	}
	
	cout << result;
	return 0;
}

