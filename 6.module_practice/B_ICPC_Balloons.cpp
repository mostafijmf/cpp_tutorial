#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int len;
        string s;
        cin >> len >> s;

        int c[26] = {0};
        for (int i = 0; i < len; i++)
        {
            int value = s[i] - 'A';
            if (c[value] == 0) c[value] += 2;
            else c[value]++;
        }

        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (c[i] != 0) cnt += c[i];
        }
        cout << cnt << endl;
    }

    return 0;
}
