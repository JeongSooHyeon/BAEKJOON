/*
분할 정복
문제 11444
피보나치 수6
*/

#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<vector<ll>> matrix;

#define C 1000000007

long long int n;

matrix operator*(matrix a, matrix b) {
	matrix ret(2, vector<ll>(2));

	for (ll i = 0; i < a.size(); i++) {
		for (ll j = 0; j < a.size(); j++) {
			for (ll k = 0; k < a.size(); k++)
			{
				ret[i][j] += (a[i][k] * b[k][j]);
			}
			ret[i][j] %= C;
		}
	}
	return ret;
}

matrix findFibo(ll num) {
	matrix baseMatrix(2, vector<ll>(2, 1));
	baseMatrix[1][1] = 0;

	if (num < 2) {
		return baseMatrix;
	}

	matrix ret(2, vector<ll>(2));
	ret = findFibo(num / 2);
	if (num % 2) {
		return ret * ret * baseMatrix;
	}
	else {
		return ret * ret;
	}
}

int main() {
	cin >> n;

	matrix ret = findFibo(n);
	cout << ret[0][1];

	return 0;
}