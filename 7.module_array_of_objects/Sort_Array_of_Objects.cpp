#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    // <-- input -->
    // 5
    // Rifat 10 95
    // Sifat 11 95
    // Fahad 15 95
    // Sakib 13 95
    // Rakib 18 99
    
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].mark > a[j].mark)
                swap(a[i], a[j]);
            if (a[i].mark == a[j].mark)
            {
                if (a[i].roll > a[j].roll)
                    swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }

    return 0;
}
