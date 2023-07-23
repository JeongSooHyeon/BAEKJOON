#include <iostream>
using namespace std;

#define C 1000000007

long long int factorial(int x) {
	long long int ans = 1;
	for (int i = 2; i <= x; i++) {
		ans = ans * i % C;
	}
	return ans;
}

long long int power(int x, int y) {
	if (y == 0)
		return 1;

	if (y % 2)
		return (power(x, y - 1) * x) % C;

	long long int temp = power(x, y / 2) % C;
	return (temp * temp) % C;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	long long int  A = 1, B = 1;
	cin >> n >> k;

	// A : n! % C
	//for (int i = 2; i <= n; i++) 
	//	A = A * i % C;

	//// B : (k!(n-k)!)^C-2 % C
	for (int i = 2; i <= k; i++)
		B = B * i % C;
	for (int i = 2; i <= n-k; i++)
		B = B * i % C;
	A = factorial(n);

	// B : (k!(n-k)!)^C-2 % C

	B = A * power(B, C - 2) % C;

	cout << B;

	return 0;

}