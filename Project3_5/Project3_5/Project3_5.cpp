#include <iostream>
using namespace std;
int main()
{
	int n;

	cin.tie(NULL);
	cin >> n;

	ios_base::sync_with_stdio(false);
	for (int i = 1; i <= n; i++)
		cout << i << '\n';
	
	return 0;
}

