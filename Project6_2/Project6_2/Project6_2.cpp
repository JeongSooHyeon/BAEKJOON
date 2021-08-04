#include <iostream>
using namespace std;

int sum(int num);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i != j + sum(j))
            {
                if (j == i - 1)
                {
                    cout << i << '\n';
                    break;
                }
                else
                    continue;
            }
            else
                break;
        }      
    }
    return 0;
}
int sum(int num) {
    int sum_n = 0; // 나머지 합

    while (true)
    {
        sum_n += num % 10; // 나머지

        if ((num / 10) == 0)
            break;

        num /= 10; // 맨 뒷자리 탈락		
    }
    return sum_n;
}

