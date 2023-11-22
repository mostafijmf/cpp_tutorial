#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int flag = true, j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[j]) flag = false;
        j--;
    }
    
    if (flag) cout << "YES";
    else cout << "NO";

    return 0;
}
