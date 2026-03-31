#include <iostream>
using namespace std;

// Nested Recursion.

int func(int n)
{
    if (n > 100)
    {
        return n - 10;
        func(n - 1);
    }
    else
    {
        return func(func(n + 11));
    }
}

int main()
{
    cout << " ====> Nested Recursion : <=============" << endl;
    cout << "  Result is : " << func(95) << endl;
}