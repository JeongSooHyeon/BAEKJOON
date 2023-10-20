/*
��� ������
*/
#include <iostream>
#include <vector>
using namespace std;

// �� ���� �� ��� Ȥ�� �� ��ܾ� ������
// ���ӵ� ������ ����� ��� ��Ƽ��� �� ��(�������� ��ܿ� �������� ����)
// ������ ���� ����� �ݵ�� ��ƾ� �Ѵ�.
// - ���� ��� Ȥ�� �� ��� �� �ϳ��� �ݵ�� ��ƾ� ��
// - ���� ���� ����� ������ �ʿ��ҵ�

int n;	// ����� �� n<=300
int score[300];
int dp[300][300];

int solve(int prev, int num) {
	int& ret = dp[prev][num];
	if (ret != -1)
		return ret;

	// ���� ��� : ��� ����� �� ������ ��
	if (num < 0)
		return ret = 0;

	// ���� ��� : ���� ��ܰ� �� ��� ��� ���� ���(���ӵ� ������ ��� ��� ���� �ʱ�)
	if (prev == num - 1 && (dp[prev - 1][prev] != -1)) {
		return solve(prev, num - 1);
	}

	// ���� ���� �� �� �� ū ��(�� ���, Ȥ�� �� ��� ������)
	return ret = score[num] + max(solve(num, num - 1), solve(num, num - 2));
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];	// ���� <=10000
	}

	cout << solve(n-1, n-1);	// ������ ��ܺ���
}