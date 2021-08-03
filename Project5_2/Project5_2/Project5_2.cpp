#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int max = 0;
	int index = 0;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
			index = i + 1;
		}
	}

	cout << max << '\n' << index;

	return 0;
}