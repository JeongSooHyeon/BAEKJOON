#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int C = 0; // 테스트 케이스 개수
	int N = 0; // 학생 수
	float sum = 0;
	float avg = 0;
	float cnt = 0.0f; // 평균 넘는 학생 수

	cin >> C;
	float* result = new float[C]; // 과목당 비율

	for (int i = 0; i < C; i++)
	{
		sum = 0;
		cnt = 0;
		cin >> N; 
		float* score = new float[N];

		for (int j = 0; j < N; j++) // 점수 받아
		{
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / N; // 평균

		for (int j = 0; j < N; j++) // 평균 넘는 학생 수 검사
		{
			if (score[j] > avg)
				cnt++;
		}
		result[i] = cnt / N * 100; // 평균 넘는 학생 비율
	}

	for (int i = 0; i < C; i++)
	{
		cout << fixed;
		cout.precision(3);

		cout << result[i] << "%\n";
	}
	
	return 0;
}
