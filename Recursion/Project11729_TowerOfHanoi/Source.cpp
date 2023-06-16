#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void TowerOfHanoi(int num, int start, int etc, int end) {	// 시작고리, 남는고리, 목표고리
	// 다 옮겼을 때
	if(num == 1) {
		cout << start << " " << end << '\n';	// 1개면 바로 시작고리에서 목표고리로 옮기기
	}
	else {
		TowerOfHanoi(num - 1, start, end, etc);	// (n-1)개를 시작고리에서 남는고리로
		cout << start << " " << end << '\n';	// 제일 밑에 거를 시작고리에서 목표고리로 옮기기
		TowerOfHanoi(num - 1, etc, start, end);	// 남는 고리의 (n-1)개를 목표고리로 옮기기
	}
}

int main() {
	int n = -1;	// 원판 개수(1 <= n <= 20)
	cin >> n;

	// cout << (1 << n) - 1 << '\n';
	cout << static_cast<int>(pow(2, n)) - 1 << '\n';

	TowerOfHanoi(n, 1, 2, 3);
	
	return 0;
}