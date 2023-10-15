/*
동적 계획법1 - 정수 삼각형
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;	// 삼각형의 크기, q<=n<=500
int triangle[501][501];
vector<vector<int>> dp(501, vector<int>(501, 0));

// 왼쪽 대각선, 오른쪽 대각선 중에서 선택
// 합이 최대

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> triangle[i][j];	// 0<=x<=9999
			dp[i][j] = triangle[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}
	vector<vector<int>>::iterator iter = dp.begin() + n;
	vector<int>::iterator iterBegin = iter->begin() + 1;
	vector<int>::iterator iterEnd = iterBegin + n;
	cout << *max_element(iterBegin, iterEnd) << endl;
	//sort(iterBegin, iterEnd);
	//cout << dp[n][n];

	return 0;
}