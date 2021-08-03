#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0; // 정수의 개수
	int max = 0;
	int min = 0;

	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];

		if (arr[i] > max)
			max = arr[i];
	}

	cout << min << ' ' << max;

	return 0;
}