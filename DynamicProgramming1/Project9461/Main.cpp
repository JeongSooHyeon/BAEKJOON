/*
파도반 수열
*/
#include <iostream>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;	// 테스트 케이스
	cin >> t;
	int n;	// 1<=n<=100
	long long int arr[101] = { 0,1,1, };

	for (int i = 3; i <= 100; i++) {
		arr[i] = arr[i - 3] + arr[i - 2];
	}
	
	for (int i = 0; i < t; i++) {
		cin >> n;

		cout << arr[n] << '\n';
	}


	return 0;
}