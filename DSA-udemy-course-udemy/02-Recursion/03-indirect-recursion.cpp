#include <iostream>
using namespace std;

// Indirect Recursion.

void funcB(int n);

void funcA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funcB(n - 1);
    }
}

void funcB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        funcA(n / 2);
    }
}

int main()
{
    cout << " ====> Indirect Recursion : <=============" << endl;
    funcA(20);
}