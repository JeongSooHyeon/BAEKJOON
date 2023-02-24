/*
코딩은 체육 과목입니다.
*/
#include <iostream>
using namespace std;

int main(void) {
	int byte;
	cin >> byte;

	for (int i = 0; i < byte/4; i++) {
		cout << "long ";
	}
	cout << "int" << endl;

	return 0;
}
