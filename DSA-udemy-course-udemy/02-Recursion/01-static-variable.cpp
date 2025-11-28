#include <iostream>
using namespace std;

// Tail Recursion;
int func1(int n)
{
    if (n > 0)
    {
        return n + func1(n - 1);
    }
    return 0;
}

// with static variable.
int func2(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return x + func2(n - 1);
    }
    return 0;
}

int main()
{
    int x = 5, result;
    result = func1(x);
    cout << "Result without static variable : " << result << endl;

    cout << "Result with static variable : " << func2(x) << endl;

    cout << "2nd Call Result with static variable : " << func2(x) << endl;
}