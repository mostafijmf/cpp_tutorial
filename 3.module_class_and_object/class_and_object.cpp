#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // Student a;
    // char name[100] = "Fahim";
    // strcpy(a.name, name);
    // a.roll = 5;
    // a.gpa = 4.55;

    // <-- Input -->
    // Fahim 5 4.55
    // Najmul 10 4.80

    // Student a, b;
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;
    // cout << a.name << " " << a.roll << " " << a.gpa << endl;
    // cout << b.name << " " << b.roll << " " << b.gpa;

    /* <-- Input -->
    Fahim Mojumdar
    5 4.55
    Najmul Hasan
    10 4.80 */

    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    getchar(); // Skip enter
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa;
    return 0;
}
