/*
�˰��� ���� - �Ǻ���ġ ��1
*/
#include <iostream>

using namespace std;

int cnt1 = 0, cnt2 = 0;

// �Ǻ���ġ ���ȣ��
int fib(int n) {
	if (n == 1 || n == 2) {
		cnt1++;
		return 1;
	}
	else {
		return (fib(n - 1) + fib(n - 2));
	}
}

int f[50];

// �Ǻ���ġ ���� ���α׷���
int fibonacci(int n) {
	f[1] = f[2] = 1;
	cnt2++;
	for (int i = 3; i < n; i++) {
		cnt2++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int main() {
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cnt1 << ' ' << cnt2;
}