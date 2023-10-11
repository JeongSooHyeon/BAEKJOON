/*
연속합
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;	// 1<=n<=100000
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];	// -1000 <= v[i] <= 1000
	}

	int ret = v[0];
	vector<int> dp;
	dp.push_back(ret);
	for (int i = 1; i < n; i++) {
		dp.push_back(max(v[i], dp[i - 1] + v[i]));	// 나 혹은 나를 포함한 이전의 최대값
		ret = max(ret, dp[i]);
	}

	cout << ret;

	return 0;
}