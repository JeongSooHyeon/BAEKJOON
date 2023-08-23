#include <iostream>
#include <vector>
using namespace std;

bool paper[100][100] = { {0,}, };	// ��ȭ��

void solve(int x, int y) {
	for (int i = 100-y-10; i < 100-y; i++) {
		for (int j = x; j < x+10; j++) {
			paper[i][j] = 1;	// ���� ����
		}
	}
}

int main(void) {
	int n = -1;	// ������ ��
	int position[100][2];	// ���� �� �Ÿ�, �Ʒ��� �� �Ÿ�
	int result = 0;
	cin >> n;

	int x,y;
	for (int i = 0; i < n; i++) {
		// cin >> position[i][0] >> position[i][1];	
		cin >> x >> y;
		solve(x, y);
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				result++;
		}
	}

	cout << result;

	return 0;
}