#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    double gpa;
    Student(int cls, int roll, double gpa)
    {
        // <-- Step:1 -->
        // (*this).cls = cls;
        // (*this).roll = roll;
        // (*this).gpa = gpa;

        // <-- Step:2 -->
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(10, 11, 4.88);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa;
    return 0;
}
