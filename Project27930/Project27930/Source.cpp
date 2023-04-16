#include <iostream>
#include <string>
using namespace std;

//void func(string k, string university) {
//	int idx = 0;
//	int idx1 = 0;
//	while (true)
//	{
//		if (university[idx1] == k[idx]) {
//			idx1++;
//			idx++;
//			if (idx1 >= university.length()) {
//				cout << university;
//				break;
//			}
//		}
//		else {
//			idx++;
//		}
//		if (idx >= k.length())
//			break;
//	}
//}
int main(void) {
	string str;
	string yonsei = "YONSEI";
	int idx1 = 0;
	string korea = "KOREA";
	int idx2 = 0;

	cin >> str;
	int idx = 0;

	//for (int i = 0; i < str.length(); i++) {
	//	if (yonsei[idx1] == str[i])
	//		idx1++;
	//	if (korea[idx2] == str[i])
	//		idx2++;
	//	if (idx1 >= yonsei.length()) {
	//		cout << yonsei;
	//		return 0;
	//	}
	//	if (idx2 >= korea.length()) {
	//		cout << korea;
	//		return 0;
	//	}
	//}

	//func(str, yonsei);
	//func(str, korea);
	
	while (true) {
		if (str[idx] == yonsei[idx1]) {
			idx1++;
			if (idx1 >= yonsei.length()) {
				cout << yonsei;
				break;
			}
		}
		if (str[idx] == korea[idx2]) {
			idx2++;
			if (idx2 >= korea.length()) {
				cout << korea;
				break;
			}
		}

		idx++;
	}
	return 0;
}