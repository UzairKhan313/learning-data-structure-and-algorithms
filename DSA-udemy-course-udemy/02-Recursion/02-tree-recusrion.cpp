#include <iostream>
using namespace std;

// Tree Recursion.
void func(int n)
{
    if (n > 0)
    {
        cout << n;
        func(n - 1);
        func(n - 1);
    }
}

int main()
{
    cout << " ====> Tree Recursion : <=============" << endl;
    func(3);
}