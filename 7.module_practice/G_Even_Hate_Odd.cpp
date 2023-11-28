#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        int arr[n], odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0) even++;
            else odd++;
        }
        int val = abs(even - odd);

        if (val % 2 == 0) cout << val / 2 << endl;
        else cout << -1 << endl;
    }

    return 0;
}
