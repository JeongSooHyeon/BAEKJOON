/*
단어 길이 재기
*/
#include <iostream>
using namespace std;

int main(void) {
	char s[101];
	int i = 0;
	cin >> s;

	while (true) {
		if (s[i] == '\0')
			break;
		i++;
	}
	cout << i;

	return 0;
}
