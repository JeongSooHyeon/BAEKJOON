#include <iostream>
#include <vector>
using namespace std;

// �������� ����
void merge_sort(vector<int> v, int p, int r) {
	int q = (p + r) / 2;	// �߰� ����
	merge_sort(v, p, q);	// ���ݺ� ����
	merge_sort(v, q + 1, r);	// �Ĺݺ� ����
	merge(v, p, q, r);		// ����
}

void merge(vector<int> v, int p, int q, int r) {
	int i = p;
	int j = q + 1;
	int t = 0;
	vector<int> tmp(v.size());

	while (i <= q && j <= r) {
		if (v[i] <= v[j]) {
			tmp[t++] = v[i++];
		}
		else {
			tmp[t++] = v[j++];
		}
	}
	while (i <= q)
		tmp[t++] = v[i++];
	while (j <= r)
		tmp[t++] = v[j++];
	i = p;
	t = 1;
	while (i <= r)
		v[i++] = tmp[t++];
}

int main() {
	int n;	// �迭 ũ�� 5 <= n < 500000
	int k;	// ���� Ƚ�� 1 <= k <= 10^8
	cin >> n >> k;
	vector<int> v;

	int e;

	for (int i = 0; i < k; ++i) {
		cin >> e;
		v.push_back(e);
	}
	merge_sort(v, 0, v.size() - 1);
}