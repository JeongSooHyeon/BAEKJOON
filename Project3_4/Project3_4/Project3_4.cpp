#include <iostream>
using namespace std;
int main()
{
	int A, B;
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin.tie(NULL);
		cin >> A >> B;

		ios_base::sync_with_stdio(false);
		cout << A + B << '\n';
	}
	return 0;
}

