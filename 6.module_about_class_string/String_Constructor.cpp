#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello world";
    // <-- 1. string with constructor -->
    // string s("Hello world");

    // <-- 2. gives provided char index -->
    // string s("Hello world", 7);

    // <-- 3. gives without provided char index -->
    string a = "Hello world";
    string s(a, 7);
    cout << s << endl;
    return 0;
}
