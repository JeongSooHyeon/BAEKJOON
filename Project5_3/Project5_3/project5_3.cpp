#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c; // �� �ڿ���
	int r; // ���� ��
	int arr[10] = {0}; // 0~9 ���� �迭
	int tmp = 0;

	cin >> a >> b >> c;
	r = a * b * c;
	
	while (true)
	{
		tmp = r % 10; // ������
		
		arr[tmp] += 1; // ������ ���� +1
				
		if ((r / 10) == 0)
			break;
		
		r /= 10; // �� ���ڸ� Ż��		
	}

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
		cout << arr[i] << '\n';

	return 0;
}