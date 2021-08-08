#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0; // 테스트 케이스 개수
    int R = 0; // 반복 횟수
    string S;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> R;
        cin >> S;

        for (int j = 0; j < S.length(); j++)
        {
            for (int k = 0; k < R; k++)
            {
                cout << S[j];
            }
        }
        cout << '\n';
    }

    return 0;
}