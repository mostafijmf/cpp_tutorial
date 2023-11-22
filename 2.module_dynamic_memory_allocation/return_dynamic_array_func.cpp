#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *arr = new int[5]{10, 20, 30, 40, 50};
    return arr;
}
int main()
{
    int *arr = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}