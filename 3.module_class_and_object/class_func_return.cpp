#include <bits/stdc++.h>
using namespace std;

// <-- Normal class function return -->
/* class Student
{
public:
    int cls;
    int roll;
    double gpa;
    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student rahim(10, 11, 3.88);
    return rahim;
}
int main()
{
    Student ans = fun();
    cout << ans.cls << " " << ans.roll << " " << ans.gpa;
    return 0;
}*/


// <-- Dynamic class function return -->
class Student
{
public:
    int cls;
    int roll;
    double gpa;
    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};
Student* fun()
{
    Student * rahim = new Student(15, 111, 3.88);
    return rahim;
}
int main()
{
    Student* ans = fun();
    cout << ans->cls << " " << ans->roll << " " << ans->gpa;
    return 0;
}
