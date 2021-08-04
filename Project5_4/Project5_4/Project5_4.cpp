#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[10] = { 0 }; // 나머지 배열
	int x = 0; // 입력
	int cnt = 1; // 다른 갯수

	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		arr[i] = x % 42;
	}

	for (int i = 0; i < 9; i++) // 0~8
	{
		for (int j = i+1; j < 10; j++) // 1~9
		{
			
			if (arr[i] != arr[j]) {
				if (j == 9)
					cnt++;
				continue;
			}
			else
				break;			
		}
		
	}

	cout << cnt;

	return 0;
}
