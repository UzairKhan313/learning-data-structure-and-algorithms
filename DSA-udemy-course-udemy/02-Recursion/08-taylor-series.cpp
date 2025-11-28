#include <iostream>
using namespace std;

//  O(n ^ 2)
double e(int x, int n)
{
    static double power = 1;
    static double fact = 1;
    double result = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        result = e(x, n - 1);
        power = power * x;
        fact = fact * n;
        return result + power / fact;
    }
}

// Taylor Series Using horner Rule O(n);
double e2(int x, int n)
{
    static double s = 1;

    if (n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + x * s / n;
        return e2(x, n - 1);
    }
}

// Taylor Series Using Loop Iterative Approach;
double e3(int x, int n)
{
    double s = 1;
    int i;
    double nom = 1;
    double dem = 1;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        nom *= x;
        dem *= i;
        s += nom / dem;
    }
    return s;
}

int main()
{

    cout << " ====> Taylor Series Using Recursion is : <=============" << endl;
    cout << "  Result is : " << e(2, 10) << endl;

    cout << " ====> Taylor Series Using Recursion (Horner's Rule) : <=============" << endl;
    cout << "  Result is : " << e2(2, 10) << endl;

    cout << " ====> Taylor Series Using Loop (Iterative Solution) : <=============" << endl;
    cout << "  Result is : " << e3(2, 10) << endl;
}