#include <iostream>
#include <vector>
using namespace std;



long long histogram(vector<long long> &height, int start, int end) {
	if (start == end) {
		return height[start];
	}

	// 왼쪽 오른쪽 중에서 큰 거
	int mid = (start + end) / 2;
	long long ret = max(histogram(height, start, mid), histogram(height, mid+1, end));

	// 중간 포함
	int lo = mid, hi = mid+1;
	int cnt = 2;
	long long minH = min(height[lo], height[hi]);
	long long tempArea = minH * cnt;
	ret = max(ret, tempArea);	// 왼쪽 or 오른쪽 너비와 중간 포함 너비 중 큰 거
	while (start < lo || hi < end) {
		// 둘 다 끝까지 갔으면 break
		//if (start >= lo && end <= hi) {
		//	break;
		//}

		// lo가 끝까지 갔거나 or hi가 더 큰 경우
		if (hi < end && (start >= lo || height[lo - 1] < height[hi + 1])) {	// 오른쪽 높이가 더 커
			hi++; cnt++;
			minH = min(minH, height[hi]);
		}
		// lo가 start보다 크고 lo가 더 큰 경우
		else {	// 왼쪽 높이가 더 높아
			lo--; cnt++;
			minH = min(minH, height[lo]);

		}
		tempArea = minH * cnt;
		ret = max(ret, tempArea);	// 더 큰 너비
	}
	return ret;

}


int main() {
	vector<long long> answer;
	while (true) {
		int n;	// 직사각형 수 1 <= 100,000
		cin >> n;
		if (n == 0)
			break;
		vector<long long> height(n);
		for (int i = 0; i < n; i++) {
			cin >> height[i];
		}

		// 함수 호출
		answer.push_back(histogram(height, 0, n-1));
	}

	for (vector<long long>::size_type i = 0; i < answer.size(); i++)
		cout << answer[i] << endl;

	return 0;
}