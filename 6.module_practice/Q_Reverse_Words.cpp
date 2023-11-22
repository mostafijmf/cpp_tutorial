#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        if(cnt) cout << " ";
        for (int i = (word.size() - 1); i >= 0; i--)
        {
            cout << word[i];
        }
        cnt++;
    }

    return 0;
}
