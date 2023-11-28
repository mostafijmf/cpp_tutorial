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
    if (a.eng_marks == b.eng_marks)
    {
        if(a.math_marks == b.math_marks) return a.id < b.id;
        else return a.math_marks > b.math_marks;
    }
    else return a.eng_marks > b.eng_marks;
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
