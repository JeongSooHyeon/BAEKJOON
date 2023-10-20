/*
��� ������
*/
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

// �� ���� �� ��� Ȥ�� �� ��ܾ� ������
// ���ӵ� ������ ����� ��� ��Ƽ��� �� ��(�������� ��ܿ� �������� ����)
// ������ ���� ����� �ݵ�� ��ƾ� �Ѵ�.
// - ���� ��� Ȥ�� �� ��� �� �ϳ��� �ݵ�� ��ƾ� ��
// - ���� ���� ����� ������ �ʿ��ҵ�

int n;	// ����� �� n<=300
int score[300];
int dp[300][300];

vector<int> dp2;
int solve(int prev, int num) {
	// ���� ��� : ��� ����� �� ������ ��
	if (num < 0)
		return 0;

	int& ret = dp[prev][num];
	if (ret != -1)
		return ret;

	// �� ��ܰ� �� ��� ��� ���� ���, ��ĭ �ǳʶٱ�
	if (prev == num+1) {
		return ret = score[num] + solve(num, num - 2);

	}
	else // �� ���, Ȥ�� �� ��� ������
		return ret = score[num] + max(solve(num, num - 1), solve(num, num - 2));
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	dp2.resize(n);	// resize�� ũ�� �Ҵ�
	for (int i = 0; i < n; i++) {
		cin >> score[i];	// ���� <=10000
	}
	cout << solve(n - 1, n - 1);	// ������ ��ܺ���



	// �ٸ� ��� Ǯ��
	dp2[0] = score[0];	// ù��° ��� �߰�
	dp2[1] = max(score[1], score[0] + score[1]);
	dp2[2] = max(score[1] + score[2], score[0] + score[2]);

	for (int i = 3; i < n; i++) {
		dp2[i] = max(dp2[i - 2], dp2[i - 3] + score[i - 1]) + score[i];
	}
	cout << dp2[n-1];	// ������ ��ܺ���
}