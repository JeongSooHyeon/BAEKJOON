/*
그대로 출력하기
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str[100];

	for (int i = 0; i < 100; i++) {
		getline(cin, str[i]);
		cout << str[i] << endl;
	}


	return 0;
}
