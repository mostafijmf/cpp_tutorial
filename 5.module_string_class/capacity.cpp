#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // cout << s.size() << endl;     // size() returns string length
    // cout << s.max_size() << endl; // max_size() returns the maximum size that string can hold
    // cout << s.capacity() << endl; // returns current available capacity of the string.
    // s.clear(); // clear the string.
    // cout << s.empty() << endl; // return true if the string is empty, otherwise false.
    s.resize(4);
    cout << s << endl; // change the size of the string.

    return 0;
}
