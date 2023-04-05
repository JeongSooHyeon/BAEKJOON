/*
팰린드롬인지 확인하기
*/
#include <iostream>
using namespace std;

int main(void) {
	string str;
	bool result = false;
	cin >> str;

	for (int i = 0; i < str.length()/2; i++) {
		if (str[i] != str[str.length() - 1 - i]) // 다르면
		{
			result = false;
			break;
		}
		result = true;
	}
	if (str.length() == 1)
		result = true;
	cout << result;
	return 0;
}