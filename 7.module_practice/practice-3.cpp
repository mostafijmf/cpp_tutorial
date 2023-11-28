#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, w, word;
    getline(cin, s);
    stringstream ss(s);
    cin >> w;

    int cnt = 0;
    while (ss >> word)
    {
        if (word == w)
            cnt++;
    }
    cout << cnt;

    return 0;
}
