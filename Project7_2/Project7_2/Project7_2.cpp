#include <iostream>
#include <vector>
using namespace std;

int sum(int N);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0; // 숫자 개수 
    char num[100] = {0};
    int sum = 0;

    cin >> N; 

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
        sum += (num[i] - '0'); // int 타입으로 변환
    }    
        
    cout << sum;
    return 0;
}