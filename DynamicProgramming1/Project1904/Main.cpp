/*
01Ÿ��
*/
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int cache[1000001];	//�迭�� ũ�� ������ ����������
int n;

int solve() {
	
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}

	for (int i = 3; i <= n; i++)	//dp�ȿ� �� �������
	{
		cache[i] = (cache[i - 1] + cache[i - 2]) % 15746;  //15746���� ���� �������� �־���Ѵ�
	}

	return cache[n];
}


int dp[1000001];

int main()
{
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)	//dp�ȿ� �� �������
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;  //15746���� ���� �������� �־���Ѵ�
	}
	cout << dp[n] << endl;	//�Է¹��� ��ġ�� ���� ���
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


	ret = solve(0, len + 2);	// 00���� �����ϴ� ����
	ret %= c;
	ret += solve(1, len + 1);	// 1�� �����ϴ� ����
	ret %= c;

	return ret % c;
}

int main() {
	cin >> n;
	memset(cache, -1, sizeof(cache));

	cout << solve(-1, 0);


	return 0;
}