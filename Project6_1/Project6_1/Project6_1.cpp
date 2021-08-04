#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

long long sum(std::vector<int>& a);

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	std::vector<int> a; // 벡터 선언
	int n = 0; // 정수 개수
	int k = 0; // 배열 입력 값

	cin >> n; // 정수 개수
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		a.push_back(k);
	}

	cout << sum(a);

	return 0;
}

long long sum(std::vector<int>& a) {
	 
	long long sum = 0;
	for (int i = 0; i < a.size(); i++)
	{
		sum += a.at(i);
	}
	
	return sum;
}