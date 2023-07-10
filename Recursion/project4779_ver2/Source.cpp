#include <iostream>
using namespace std;

void solution(int N) {
    if (N == 1) {
        cout << '-';

        return;
    }
    solution(N / 3);

    for (int i = 0; i < N / 3; i++)
        cout << ' ';

    solution(N / 3);
}

int main() {
    int N;

    while (cin >> N) {
        solution(pow(3, N));
        cout << endl;
    }

    return 0;
}