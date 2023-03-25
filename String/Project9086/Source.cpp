/*
¹®ÀÚ¿­
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int t = -1;
	string s[10];
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < t; i++) {
		cout << s[i][0] << s[i][s[i].length()-1] << endl;
	}

	return 0;
}
