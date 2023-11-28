#include <bits/stdc++.h>
using namespace std;

long long int equat(int x, int n)
{
    long long int r = 0;
    for (int i = 2; i <= n; i += 2)
    {
        long long int mul = x;
        for (int j = 0; j < i-1; j++)
        {
            mul *= x;
        }
        r += mul;
    }
    return r;
}

int main()
{
    int x, n;
    cin >> x >> n;
    long long int ans = equat(x, n);
    cout << ans;

    return 0;
}
