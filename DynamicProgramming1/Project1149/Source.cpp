/*
알고리즘 수업 - RGB 거리
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;	// 집의 수 2<=n<=1000
	cin >> n;

	// i번째에 col색으로 칠할 때의 최솟값
	int cost[3];
	vector<vector<int>> dp(n+1,vector<int>(3,0));
	for (int i = 0; i < n; i++) {
		cin >> cost[0] >> cost[1] >> cost[2];
		dp[i][0] = cost[0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = cost[1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = cost[2] + min(dp[i - 1][0], dp[i - 1][1]);
	}
	cout << min(dp[n][2], min(dp[n][0], dp[n][1]));
	
}