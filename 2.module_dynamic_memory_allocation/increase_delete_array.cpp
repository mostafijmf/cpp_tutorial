#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3]{10, 20, 30};
    int *b = new int[3]{10, 20, 30};
    delete[] a;

    a = new int[5];
    for (int i = 0; i < 3; i++)
        a[i] = b[i];
    delete[] b;
    a[3] = 40;
    a[4] = 50;
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}