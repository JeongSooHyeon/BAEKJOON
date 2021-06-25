#include <iostream>
using namespace std;
int main()
{
	int H, M;

	cin >> H >> M;

	if ((M - 45) < 0)
	{
		H -= 1;
		M = 60 - (45 - M); // M += 15
	}
	else
		M -= 45;

	if (H < 0)
		H += 24;


	cout << H << " " << M << endl;

	return 0;
}

