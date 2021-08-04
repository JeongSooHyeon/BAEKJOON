#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;	// 과목 수
	int M = 0; // 최댓값
	float sum = 0; // 총 점수

	cin >> n;
	float* arr = new float[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > M)
			M = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] / M * 100;
		sum += arr[i];
	}

	cout << sum / n;
	return 0;
}
