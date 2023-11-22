#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "HelloWorld";

    // cout << *a.begin() << endl; // pointer to the first element.
    // cout << *(a.end() - 1) << endl; // pointer to the next element after the last element of the string.

    // for (string::iterator it = a.begin(); it < a.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    
    // <-- With auto -->
    for (auto it = a.begin(); it < a.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
