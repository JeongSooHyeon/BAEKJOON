#include <iostream>
using namespace std;

long long c;

long long power(long long a, long long b) {
	// ±âÀú »ç·Ê
	if (b == 1)
		return a % c;

	long long temp = power(a, b / 2);

	if (b % 2 == 1) {	// È¦¼ö
		return ((temp % c) * (a*temp % c))%c;
	}

	return ((temp % c) * (temp % c))%c;
}

int main() {
	long long a, b;
	cin >> a >> b >> c;

	cout << power(a, b);
}