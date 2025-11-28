#include <iostream>
using namespace std;

int fib(int n)
{

    if (n <= 1)
    {
        return n;
    }
    else
    {

        return fib(n - 1) + fib(n - 2);
    }
}

// Using Loop;
int fib2(int n)
{

    int t = 0, t1 = 1, sum;
    for (int i = 2; i <= n; i++)
    {
        sum = t + t1;
        t = t1;
        t1 = sum;
    }
    return sum;
}

int A[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
// Using Memorization;
int fib3(int n)
{

    if (n <= 1)
    {
        A[n] = n;
        return n;
    }
    else
    {
        if (A[n - 1] == -1)
            A[n - 1] = fib3(n - 1);
        if (A[n - 2] == -1)
            A[n - 2] = fib3(n - 2);

        return A[n - 1] + A[n - 2];
    }
}

int main()
{

    cout << " ====> Fibonacci Series Using Recursion is with O(n) : <=============" << endl;
    cout << "  Result is : " << fib(6) << endl;

    cout << " ====> Fibonacci Series Using Loop is with O(2^n) : <=============" << endl;
    cout << "  Result is : " << fib2(7) << endl;

    cout << " ====> Fibonacci Series Using Memorization is with O(n) : <=============" << endl;
    cout << "  Result is : " << fib3(7) << endl;
}