/*
¿Àºì ½Ã°è
*/
#include <iostream>
using namespace std;

void getFinishTime(int hour, int minute, int cookingTime) {
	minute += cookingTime;
	hour += minute / 60;
	minute %= 60;

	if (hour > 23)
		hour %= 24;

	cout << hour << ' ' << minute << endl;
}
int main(void) {
	int hour, minute;
	int cookingTime;

	cin >> hour >> minute;
	cin >> cookingTime;

	getFinishTime(hour, minute, cookingTime);
	return 0;
}
