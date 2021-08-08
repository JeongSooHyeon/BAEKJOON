#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string S;
    int idx;
    
    getline(cin, S);

    for (char tmp = 'a'; tmp <= 'z'; tmp++)
    {
        idx = S.find(tmp);
        cout << idx << " ";
    }
    return 0;
}