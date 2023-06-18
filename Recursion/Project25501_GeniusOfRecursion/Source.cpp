#include <iostream>
using namespace std;

int cnt = 0;

int recursion(string& s, int l, int r) {
	cnt++;
	if (l >= r)	// �� �˻� ������ 
		return 1;

	else if (s[l] == s[r])	// �� �� �� �˻�
		return recursion(s, l + 1, r - 1);
	else
		return 0;
}
int isPalindrome(string& s) {
	cnt = 0;
	return recursion(s, 0, s.size() - 1);
}

int main() {
	int t;	// 1 <= t <= 1000
	cin >> t;

	for (int i = 0; i < t; ++i) {
		string s;
		cin >> s;
		cout << isPalindrome(s) << ' ' << cnt << endl;
	}
}