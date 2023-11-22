#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int clss;
    Student(string name, int age, int clss)
    {
        this->name = name;
        this->age = age;
        this->clss = clss;
    }
    void print()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Class: " << clss << endl;
    }
};

int main()
{
    Student rakib("Rakib", 16, 9);
    rakib.print();

    return 0;
}
