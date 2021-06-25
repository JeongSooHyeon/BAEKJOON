#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, x;
	cin >> n >> x;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
			cout << a[i] << " ";
	}
	return 0;
}