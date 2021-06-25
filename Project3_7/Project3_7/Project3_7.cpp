#include <iostream>
using namespace std;
int main()
{
	int T;
	int A, B;

	cin.tie(NULL);
	cin >> T;

	ios_base::sync_with_stdio(false);
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " 
			<< A << " + " << B << " = " << A + B << '\n';
	}
	return 0;
}

