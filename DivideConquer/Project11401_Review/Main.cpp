#include <iostream>
using namespace std;

#define C 1000000007

// 재귀 함수는 스택에 쌓인다. 메모리 초과
//long long factorial(int start, int end) {
//	if (start == end)
//		return start % C;
//
//	return (factorial(start, end - 1) * (end % C)) % C;
//}

int power(int base, int exp) {
	if (exp == 1) {
		return base % C;
	}

	long long temp = power(base, exp / 2);
	if (exp % 2 == 1) {	// 홀수
		return ((temp) * ((base * temp) % C)) % C;
	}

	return ((temp) * (temp)) % C;
}

int binomial(int n, int k) {	// 이항 계수 : binomial coefficeint
	//long long A = factorial(n - k + 1, n);
	//long long B = factorial(1, k);

	long long A = 1, B = 1;;
	for (int i = n-k+1; i <= n; i++) {
		A = ((A % C) * (i % C))%C;
	}
	for (int i = 1; i <= k; i++) {
		B = ((B % C) * (i % C))%C;
	}

	B = power(B, C - 2);	// B^(C-2) % C

	return ((A % C) * B) % C;
}

int main() {
	int n, k;
	cin >> n >> k;

	cout << binomial(n, k);

	return 0;
}