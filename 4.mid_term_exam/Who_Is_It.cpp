#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char sec[26];
    int mark;
};

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        Student s1, s2, s3;
        cin >> s1.id >> s1.name >> s1.sec >> s1.mark;
        cin >> s2.id >> s2.name >> s2.sec >> s2.mark;
        cin >> s3.id >> s3.name >> s3.sec >> s3.mark;

        int mx = max({s1.mark, s2.mark, s3.mark});
        if (mx == s1.mark)
            cout << s1.id << " " << s1.name << " " << s1.sec << " " << s1.mark << endl;
        else if (mx == s2.mark)
            cout << s2.id << " " << s2.name << " " << s2.sec << " " << s2.mark << endl;
        else if (mx == s3.mark)
            cout << s3.id << " " << s3.name << " " << s3.sec << " " << s3.mark << endl;
    }

    return 0;
}
