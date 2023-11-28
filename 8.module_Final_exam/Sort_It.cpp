#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int clss;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

bool sort_func(Student a, Student b) {
    int sumA = a.math_marks + a.eng_marks;
    int sumB = b.math_marks + b.eng_marks;
    if (sumA == sumB)
    {
        return a.id < b.id;
    }
    else return sumA > sumB;    
}

int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].clss >> s[i].sec >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s + n, sort_func);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].clss << " " << s[i].sec << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}
