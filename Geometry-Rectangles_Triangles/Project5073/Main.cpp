/*
삼각형과 세 변
*/
#include <iostream>
using namespace std;

int main() {
	int a, b, c;	// 각의 크기
	int longest = -1;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		longest = max(a, b);
		longest = max(longest, c);


		if (2*longest < a+b+c) {
			if (a == b && b == c && c == a) {
				cout << "Equilateral" << endl;
			}

			else if (a == b || a == c || b == c)
				cout << "Isosceles" << endl;

			else
				cout << "Scalene" << endl;
		}
		else
			cout << "Invalid" << endl;
	}

	return 0;
}