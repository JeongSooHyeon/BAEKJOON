#include <iostream>
using namespace std;

int a, b, c;

// °ÅµìÁ¦°ö ¹Ø:base, Áö¼ö:power, 'exponent'
int power(int base, int exp) {
	if (exp == 1) {
		return base % c;
	}

	long long temp = power(base, exp / 2);
	if (exp % 2 == 1) {	// È¦¼ö
		return ((temp) * ((base  * temp) % c)) % c;
	}
	return ((temp) * (temp)) % c;
}

int main() {
	cin >> a >> b >> c;

	cout << power(a, b);

	return 0;
}