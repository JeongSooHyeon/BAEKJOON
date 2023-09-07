/*
약수들의 합
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
	vector<int> v;
	int factor = 1;
	int sum = 0;
	while (true) {
		if (n == factor)
			break;
		if (n % factor == 0) {
			v.push_back(factor);
			sum += factor;
		}
		factor++;
	}

	if (sum == n) {
		cout << n << " = ";
		for (int i = 0; i < v.size() - 1; i++)
			cout << v[i] << " + ";
		cout << v.back() << endl;
	}
	else {
		cout << n << " is NOT perfect." << endl;
	}
}

int main() {
	int n;

	while (true) {
		cin >> n;
		if (n == -1)
			break;
		solve(n);
	}

	return 0;
}