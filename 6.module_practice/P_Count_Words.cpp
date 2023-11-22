#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool isWord = false;
    int count = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!isWord) count++;
            isWord = true;
        }
        else isWord = false;
    }
    cout << count;

    return 0;
}
