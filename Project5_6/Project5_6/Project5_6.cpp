#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0; // 문제 수
	char str[80] = "";
	int scr = 0; // 각 점수
	int sum = 0; // 문제당 점수

	cin >> n;

	int* score = new int[n]; // 점수 배열

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		sum = 0;
		scr = 0;
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == 'O')
			{
				sum += ++scr;
			}
			else
			{
				scr = 0;
			}
			score[i] = sum;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << score[i] << '\n';
	}

	return 0;
}
