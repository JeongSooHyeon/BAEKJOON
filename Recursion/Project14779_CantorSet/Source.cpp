#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n;

void print(vector<char>& str) {
	for (vector<char>::size_type i = 0; i < str.size(); ++i)
		cout << str[i];
	cout << endl;
}
void changeStr(vector<char>& str, int cnt, int idx) {
	for (int i = 0; i < cnt; ++i) {
		str[idx++] = ' ';
	}
	//print(str);
}

void CantorSet(int start, int cnt, vector<char>& str) {
	// 기저 사례 : 선의 길이가 1
	if (cnt == 1)
		return;

	changeStr(str, cnt / 3, start + cnt / 3);
	CantorSet(0 + start, cnt / 3, str);
	CantorSet(start + cnt / 3 * 2, cnt / 3, str);
}

int main() {
	while(cin >> n){
		vector<char> str;

		int cnt = pow(3, n);
		for (int i = 0; i < cnt; ++i) {
			str.push_back('-');
		}
		CantorSet(0, cnt, str);
		print(str);
	}
}