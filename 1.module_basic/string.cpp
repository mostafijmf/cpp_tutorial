#include <iostream>
using namespace std;
int main()
{
    char name[100];
    // cin >> name; //for taking single word
    // cin.getline(name, 100); //for taking all strings
    fgets(name, 100, stdin);
    cout << name;
    return 0;
}