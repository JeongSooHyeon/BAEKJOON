#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int x, temp;
    int a, b;
    int cnt = 0;

    cin >> x;
    temp = x;

    while (true)
    {
        a = (temp / 10); // 십의 자리
        b = (temp % 10); // 일의 자리
        temp = b * 10 + (a + b) % 10;
       
        cnt++;

        if (temp == x)
            break;
    }

    cout << cnt;
    return 0;
}
