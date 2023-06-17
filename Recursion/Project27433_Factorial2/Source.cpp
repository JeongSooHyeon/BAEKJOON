#include <iostream>
#include <vector>
using namespace std;

// 반환값 범위 틀림
unsigned int long long factorial(int n) {
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}
int main() {
	int n = -1;	// 0 <= n <= 20 
	cin >> n;

	cout << factorial(n);
}