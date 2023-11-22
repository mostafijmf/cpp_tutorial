#include <bits/stdc++.h>
using namespace std;
// #define nl '\n'

int main()
{
    int n;
    cin >> n;
    int count[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;

        int value = ch - 'a';
        count[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (count[i] != 0)
        {
            cout << char(i + 97);
            count[i]--;
        }
    }
    return 0;
}