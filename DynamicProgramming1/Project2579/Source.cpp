/*
계단 오르기
*/
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

// 한 번에 한 계단 혹은 두 계단씩 오르기
// 연속된 세개의 계단을 모두 밟아서는 안 됨(시작점은 계단에 포함하지 않음)
// 마지막 도착 계단은 반드시 밟아야 한다.
// - 전전 계단 혹은 전 계단 중 하나는 반드시 밟아야 함
// - 전에 밟은 계단의 정보가 필요할듯

int n;	// 계단의 수 n<=300
int score[300];
int dp[300][300];

vector<int> dp2;
int solve(int prev, int num) {
	// 기저 사례 : 모든 계단을 다 지났을 때
	if (num < 0)
		return 0;

	int& ret = dp[prev][num];
	if (ret != -1)
		return ret;

	// 전 계단과 내 계단 모두 밟은 경우, 두칸 건너뛰기
	if (prev == num+1) {
		return ret = score[num] + solve(num, num - 2);

	}
	else // 한 계단, 혹은 두 계단 오르기
		return ret = score[num] + max(solve(num, num - 1), solve(num, num - 2));
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	dp2.resize(n);	// resize로 크기 할당
	for (int i = 0; i < n; i++) {
		cin >> score[i];	// 점수 <=10000
	}
	cout << solve(n - 1, n - 1);	// 마지막 계단부터



	// 다른 사람 풀의
	dp2[0] = score[0];	// 첫번째 계단 추가
	dp2[1] = max(score[1], score[0] + score[1]);
	dp2[2] = max(score[1] + score[2], score[0] + score[2]);

	for (int i = 3; i < n; i++) {
		dp2[i] = max(dp2[i - 2], dp2[i - 3] + score[i - 1]) + score[i];
	}
	cout << dp2[n-1];	// 마지막 계단부터
}