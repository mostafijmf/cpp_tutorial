#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        string c;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            if(n-1 == i) cout << c << endl;
            else cout << c << " ";
        }
        
    }

    return 0;
}
