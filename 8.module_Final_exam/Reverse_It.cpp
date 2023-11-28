#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int clss;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].clss >> s[i].sec >> s[i].id;
    }

    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i < j)
        {
            char tmp = s[i].sec;
            s[i].sec = s[j].sec;
            s[j].sec = tmp;
        }
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].clss << " " << s[i].sec << " " << s[i].id << endl;
    }

    return 0;
}
