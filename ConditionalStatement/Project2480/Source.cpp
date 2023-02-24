/*
주사위 세개
*/
#include <iostream>
using namespace std;

int getDiceEye(int a, int b, int c, int& sameResult) { // 같은 눈 구하기
	int diceNum = -1;
	int maxNum = a;

	if (a == b) {
		sameResult++;
		diceNum = a;
	}
	if (a == c) {
		sameResult++;
		diceNum = a;
	}
	if (sameResult != 3 && b == c) { // 이미 다 같으면 검사 안 함
		sameResult++;
		diceNum = b;
	}
	

	if (sameResult == 1) { // 같은 눈이 하나도 없어
		if (maxNum < b)
			maxNum = b;
		if (maxNum < c)
			maxNum = c;
		diceNum = maxNum;
	}
	
	return diceNum; 
}

int calculationPrizeMoney(int sameResult, int diceNum) {
	int prizeMoney = -1;
	switch (sameResult) {
	case 1:
		prizeMoney = diceNum * 100;
		break;
	case 2:
		prizeMoney = 1000 + diceNum * 100;
		break;
	case 3:
		prizeMoney = 10000 + diceNum * 1000;
		break;
	}

	return prizeMoney;
}

int main(void) {
	int a, b, c;
	int sameResult = 1;

	cin >> a >> b >> c;
	cout << calculationPrizeMoney(sameResult, getDiceEye(a, b, c, sameResult)) << endl;


	return 0;
}
