#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;
int k;	// ���� Ƚ�� 1 <= k <= 10^8

void merge(vector<int>& v, vector<int>& temp, int low, int mid, int high) {
	int i = low;
	int j = mid + 1;
	int t = 0;

	while (i <= mid && j <= high) {
		if (v[i] <= v[j]) {
			temp[t++] = v[i++];
		}
		else {
			temp[t++] = v[j++];
		}
	}
	while (i <= mid)
		temp[t++] = v[i++];
	while (j <= high)
		temp[t++] = v[j++];

	i = low;
	for (int w = 0; i <= high; ++w) {
		v[i++] = temp[w];
		if (++cnt == k)
			cout << temp[w];
	}
}
// �������� ����
void merge_sort(vector<int>& v, vector<int>& temp, int low, int high) {
	if (low >= high)	// ���� 1
		return;
	int mid = (low + high) / 2;	// �߰� ����
	merge_sort(v, temp,low, mid);	// ���ݺ� ����
	merge_sort(v, temp, mid + 1, high);	// �Ĺݺ� ����
	merge(v, temp, low, mid, high);		// ����
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// �迭 ũ�� 5 <= n < 500000
	cin >> n >> k;
	vector<int> v;
	vector<int> temp(v.size());

	int e;

	for (int i = 0; i < n; ++i) {
		cin >> e;
		v.push_back(e);
	}
	merge_sort(v, temp, 0, v.size() - 1);
	if (cnt < k)
		cout << -1;
}