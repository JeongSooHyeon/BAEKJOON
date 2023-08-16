#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

ll solve(vector<ll>& v, int start, int end) {
	if (start == end) {	// 판자가 1개
		return v[start];
	}

	// 두롤 분할
	int mid = (start + end) / 2;
	ll ret = max(solve(v, start, mid), solve(v, mid + 1, end));

	int lo = mid;
	int hi = mid + 1;
	ll height = min(v[lo], v[hi]);
	ret = max(ret, height * 2);

	while (start < lo || hi < end) {
		if (hi < end && (lo == start || v[lo - 1] < v[hi + 1])) {
			++hi;
			height = min(height, v[hi]);
		}
		else {
			--lo;
			height = min(height, v[lo]);
		}
		ret = max(ret, height * (hi - lo + 1));
	}
	return ret;
}

int main() {
	int n = -1;	// 직사각형의 수
	vector<ll> result;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		vector<ll> v(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		result.push_back(solve(v, 0, n - 1));
	}

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
	return 0;
}