#include <iostream>
using namespace std;

#define C 1000000007
long long Power(int x) {
	if (x == 0)
		return 1;
	if (x % 2 == 1)
		return B * Power(x - 1) % C;
	else {
		int half = Power(x / 2);
		return half * half % C;
	}
}

int main() {
long long n, k, A, B;
	cin >> n >> k;
	A = 1;
	// A : (n-k+1) * ... * n
	for (int i = n - k + 1; i <= n; ++i) {
		A = (A * i) % C;
	}

	// B : 1 * ... * k
	for (int i = 1; i <= k; i++) {
		B = (B * i) % C;
	}

	// B = (k!)^(p-2)
	B = Power(C - 2);

	cout << A * B % C;

	return 0;

}