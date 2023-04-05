/*
너의 평점은
*/
#include <iostream>
#include <string>
using namespace std;

class MajorScore { // 전공 평점 클래스
public:
	string subject; // 과목
	double score; // 학점
	string grade; // 등급
	MajorScore(string subject, double score, string grade)
		: subject(subject), score(score), grade(grade)
	{}
};
class AverageScoreCalculator{
private:
	MajorScore* arr[20];
	double average;
public:
	void inputScore() {
		string sub;
		double scr;
		string grd;
		for (int i = 0; i < 20; i++) {
			cin >> sub >> scr >> grd;
			arr[i] = new MajorScore(sub, scr, grd);
		}
	}
	double Calculate() {
		double subjectSum = 0.0;
		double sum = 0.0;
		for (int i = 0; i < 20; i++) {
			if (arr[i]->grade != "P") {
				sum += arr[i]->score;
				subjectSum +=
					arr[i]->score * getSubjectAverage(arr[i]->grade);
			}
		}
		average = subjectSum / sum;
		return average;
	}
	double getSubjectAverage(string grade) {
		if (grade == "A+")
			return 4.5;
		else if (grade == "A0")
			return 4.0;
		else if (grade == "B+")
			return 3.5;
		else if (grade == "B0")
			return 3.0;
		else if (grade == "C+")
			return 2.5;
		else if (grade == "C0")
			return 2.0;
		else if (grade == "D+")
			return 1.5;
		else if (grade == "D0")
			return 1.0;
		else if (grade == "F")
			return 0.0;
	}

};
int main(void) {
	AverageScoreCalculator asc;
	asc.inputScore();
	cout << asc.Calculate() << endl;

	return 0;
}