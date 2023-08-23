#include <iostream>
#include <vector>
using namespace std;



long long histogram(vector<long long> &height, int start, int end) {
	if (start == end) {
		return height[start];
	}

	// ���� ������ �߿��� ū ��
	int mid = (start + end) / 2;
	long long ret = max(histogram(height, start, mid), histogram(height, mid+1, end));

	// �߰� ����
	int lo = mid, hi = mid+1;
	int cnt = 2;
	long long minH = min(height[lo], height[hi]);
	long long tempArea = minH * cnt;
	ret = max(ret, tempArea);	// ���� or ������ �ʺ�� �߰� ���� �ʺ� �� ū ��
	while (start < lo || hi < end) {
		// �� �� ������ ������ break
		//if (start >= lo && end <= hi) {
		//	break;
		//}

		// lo�� ������ ���ų� or hi�� �� ū ���
		if (hi < end && (start >= lo || height[lo - 1] < height[hi + 1])) {	// ������ ���̰� �� Ŀ
			hi++; cnt++;
			minH = min(minH, height[hi]);
		}
		// lo�� start���� ũ�� lo�� �� ū ���
		else {	// ���� ���̰� �� ����
			lo--; cnt++;
			minH = min(minH, height[lo]);

		}
		tempArea = minH * cnt;
		ret = max(ret, tempArea);	// �� ū �ʺ�
	}
	return ret;

}


int main() {
	vector<long long> answer;
	while (true) {
		int n;	// ���簢�� �� 1 <= 100,000
		cin >> n;
		if (n == 0)
			break;
		vector<long long> height(n);
		for (int i = 0; i < n; i++) {
			cin >> height[i];
		}

		// �Լ� ȣ��
		answer.push_back(histogram(height, 0, n-1));
	}

	for (vector<long long>::size_type i = 0; i < answer.size(); i++)
		cout << answer[i] << endl;

	return 0;
}