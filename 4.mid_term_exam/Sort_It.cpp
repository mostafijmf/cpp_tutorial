#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if(i == n-1) cout << arr[i];
        else cout << arr[i]<< " ";
    }
    cout << endl;
    sort(arr, arr + n, greater<long long int>());
    for (int i = 0; i < n; i++)
    {
        if(i == n-1) cout << arr[i];
        else cout << arr[i]<< " ";
    }

    return 0;
}
