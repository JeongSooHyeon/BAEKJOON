/*
계단 오르기
*/
#include <iostream>
#include <vector>
using namespace std;

// 한 번에 한 계단 혹은 두 계단씩 오르기
// 연속된 세개의 계단을 모두 밟아서는 안 됨(시작점은 계단에 포함하지 않음)
// 마지막 도착 계단은 반드시 밟아야 한다.
// - 전전 계단 혹은 전 계단 중 하나는 반드시 밟아야 함
// - 전에 밟은 계단의 정보가 필요할듯

int n;	// 계단의 수 n<=300
int score[300];
int dp[300][300];

int solve(int prev, int num) {
	int& ret = dp[prev][num];
	if (ret != -1)
		return ret;

	// 기저 사례 : 모든 계단을 다 지났을 때
	if (num < 0)
		return ret = 0;

	// 기저 사례 : 전전 계단과 전 계단 모두 밟은 경우(연속된 세개의 계단 모두 밟지 않기)
	if (prev == num - 1 && (dp[prev - 1][prev] != -1)) {
		return solve(prev, num - 1);
	}

	// 전에 밟은 것 중 더 큰 거(한 계단, 혹은 두 계단 오르기)
	return ret = score[num] + max(solve(num, num - 1), solve(num, num - 2));
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];	// 점수 <=10000
	}

	cout << solve(n-1, n-1);	// 마지막 계단부터
}