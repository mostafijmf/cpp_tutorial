#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        string digit;
        cin >> digit;
        int j = 0, k = digit.size() - 1, first = 0, last = 0;
        while (j < k)
        {
            first += digit[j];
            last += digit[k];
            j++;
            k--;
        }

        if(first == last) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
