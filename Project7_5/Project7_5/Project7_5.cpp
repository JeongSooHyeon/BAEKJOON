#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    char s[1000000];
    char result = '?';

    int cnt = 0; // 쓰인 알파벳 수

    int max = 0;
    int idx = 0; // 가장 많은 알파벳의 인덱스

    cin >> s;

    int* carr = new int[strlen(s)];

    for (int i = 0; s[i] != '\0'; i++) // 대문자로 바꿔주기
    {
        s[i] = toupper(s[i]);
    }

    if (strlen(s) == 1)
    {
        cout << s;
        return 0;
    }

    for (char i = 'A'; i <= 'Z'; i++)
    {
        cnt = 0;
        for (int j = 0; j < strlen(s); j++) // apple 5
        {
            if (s[j] == i)
            {
                ++cnt;
                carr[j] = cnt;
            }
        }
    }

    for (int i = 0; i < strlen(s); i++)
    {
        if (carr[i] > max)
        {
            max = carr[i];
            idx = i;
        }
    }
   
    int ocnt = 0;
    for (int i = 0; i < strlen(s); i++) // ?출력
    {
        if (carr[i] == max)
            ++ocnt;        
    }
    if (ocnt == 1)
        result = s[idx];       


    cout << result;
    return 0;
}