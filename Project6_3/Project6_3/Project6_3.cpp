#include <iostream>
#include <vector>
using namespace std;

bool han(int num);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    int cnt = 0; // 한수 개수

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (han(i))
            cnt++;
    }

    cout << cnt;
    return 0;
}
bool han(int num) {
    int k = 0; // 차
 
    std::vector<int> v;

    if ((num / 10 == 0) || ( num / 100 == 0))
    {
        return true;
    }

    while (true)
    {
        v.push_back(num % 10); // 각 자리수 넣기

        if ((num / 10) == 0)
            break;

        num /= 10; // 맨 뒷자리 탈락		
    }

    k = v.at(0) - v.at(1);

    for (int i = 0; i < v.size()-1; i++)
    {
        if (k == v.at(i) - v.at(i + 1))
            continue;
        else
            return false;
    }
    return true;
}
