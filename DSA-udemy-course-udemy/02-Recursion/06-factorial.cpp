#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    cout << " ====> Finding the factorial of a Number : <=============" << endl;
    cout << "  Result is : " << fact(6) << endl;
}