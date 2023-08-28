/*
�Ϲ� ����1 - ���� ��ȯ2
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;


vector<char> result;
void convert(long long n, int b) {
	long long quotient = -1;	// ��
	int remainder = -1;	// ������
	bool flag = true;
	while (flag) {
		quotient = n/b;
		if (quotient == 0) {
			flag = false;
		}
		remainder = n % b;
		char ch = remainder + '0';
		if (remainder > 9) {
			ch = (char)(remainder + 55);
		}
		result.push_back(ch);
		n /= b;
	}
}
int main() {
	long long n;	// <= 10��
	int b = -1;	// 2 <= b <= 36
	cin >> n >> b;

	convert(n, b);

	for (vector<char>::reverse_iterator i = result.rbegin(); i < result.rend(); i++) {
		cout << *i;
	}

	return 0;
}

