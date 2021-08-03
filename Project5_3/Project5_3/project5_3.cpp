#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c; // 세 자연수
	int r; // 곱한 값
	int arr[10] = {0}; // 0~9 갯수 배열
	int tmp = 0;

	cin >> a >> b >> c;
	r = a * b * c;
	
	while (true)
	{
		tmp = r % 10; // 나머지
		
		arr[tmp] += 1; // 나머지 갯수 +1
				
		if ((r / 10) == 0)
			break;
		
		r /= 10; // 맨 뒷자리 탈락		
	}

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
		cout << arr[i] << '\n';

	return 0;
}