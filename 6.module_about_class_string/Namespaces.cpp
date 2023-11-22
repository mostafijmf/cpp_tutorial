#include <bits/stdc++.h>
using namespace std;

namespace First
{
    void sayHello()
    {
        cout << "Hello First Namespace" << endl;
    }
}
namespace Second
{
    void sayHello()
    {
        cout << "Hello Second Namespace" << endl;
    }
}

using namespace Second;

int main()
{
    First::sayHello();
    sayHello();
    return 0;
}
