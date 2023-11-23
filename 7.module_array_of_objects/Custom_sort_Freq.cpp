#include <bits/stdc++.h>
using namespace std;

class Freq
{
public:
    char c;
    int cnt;
};

bool cmp(Freq a, Freq b)
{
    if (a.cnt == b.cnt) return a.c < b.c;
    else return a.cnt > b.cnt;
}

int main()
{
    // <-- input -->
    // abcdzdazz
    // <-- output -->
    // zzzaaddbc

    string s;
    cin >> s;
    Freq f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i].c = char(i + 'a');
        f[i].cnt = 0;
    }

    for (char c : s)
    {
        int ascii = int(c - 'a');
        f[ascii].cnt++;
    }

    sort(f, f + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < f[i].cnt; j++)
        {
            cout << f[i].c;
        }
    }

    return 0;
}
