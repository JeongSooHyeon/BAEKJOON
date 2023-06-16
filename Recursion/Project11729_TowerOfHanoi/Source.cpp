#include <iostream>
#include <vector>
using namespace std;

void TowerOfHanoi(int num, int start, int etc, int end) {	// ���۰�, ���°�, ��ǥ��
	// �� �Ű��� ��
	if(num == 1) {
		cout << start << " " << end << endl;	// 1���� �ٷ� ���۰����� ��ǥ���� �ű��
	}
	else {
		TowerOfHanoi(num - 1, start, end, etc);	// (n-1)���� ���۰����� ���°���
		cout << start << " " << end << endl;	// ���� �ؿ� �Ÿ� ���۰����� ��ǥ���� �ű��
		TowerOfHanoi(num - 1, etc, start, end);	// ���� ���� (n-1)���� ��ǥ���� �ű��
	}
}

int main() {
	int n = -1;	// ���� ����(1 <= n <= 20)
	cin >> n;

	// cout << (1 << n) - 1 << endl;
	cout << static_cast<int>(pow(2, n)) - 1 << endl;

	TowerOfHanoi(n, 1, 2, 3);
	
	return 0;
}