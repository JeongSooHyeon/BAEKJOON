/*
01타일
*/
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int cache[1000001];	//배열이 크기 때문에 전역변수로
int n;

int solve() {
	
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}

	for (int i = 3; i <= n; i++)	//dp안에 값 계산해줌
	{
		cache[i] = (cache[i - 1] + cache[i - 2]) % 15746;  //15746으로 나눈 나머지를 넣어야한다
	}

	return cache[n];
}


int dp[1000001];

int main()
{
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)	//dp안에 값 계산해줌
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;  //15746으로 나눈 나머지를 넣어야한다
	}
	cout << dp[n] << endl;	//입력받은 위치의 값을 출력
	return 0;
}




const int c = 15746;
int n;	// 1<=n<1000000
int cache[3][1000000];

int solve(int start, int len) {
	if (len > n)
		return 0;
	if (len == n)
		return 1;

	int& ret = cache[start + 1][len];
	if (ret != -1)
		return ret;


	ret = solve(0, len + 2);	// 00으로 시작하는 개수
	ret %= c;
	ret += solve(1, len + 1);	// 1로 시작하는 개수
	ret %= c;

	return ret % c;
}

int main() {
	cin >> n;
	memset(cache, -1, sizeof(cache));

	cout << solve(-1, 0);


	return 0;
}