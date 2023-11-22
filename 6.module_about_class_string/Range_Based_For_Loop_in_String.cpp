#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // <-- 1. Regular loop -->
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }

    // <-- 2. Shortcut loop to get char without index -->
    for (char c : s)
    {
        cout << c;
    }

    return 0;
}
