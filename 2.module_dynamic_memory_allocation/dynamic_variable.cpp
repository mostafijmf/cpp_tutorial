#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    *a = 100;
    cout << "fun: " << *a << endl;
    return a;
}

int main()
{
    int *p = fun();
    cout << "main: " << *p << endl;

    // int *a = new int;
    // *a = 10;
    // cout << a << endl;  // print address of 'a'
    // cout << *a << endl; // print value of 'a'

    // float *f = new float;
    // *f = 10.54884;
    // cout << f << endl;  // print address of 'b'
    // cout << *f << endl; // print value of 'b'
    return 0;
}