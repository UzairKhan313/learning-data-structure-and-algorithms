#include <iostream>
using namespace std;

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return m * power(m, n - 1);
    }
}

// With Less step in multiplication,
int power2(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
        return power2(m * m, n / 2);

    return m * power2(m * m, (n - 1) / 2);
}

int main()
{
    int m = 2, n = 5;
    cout << " ====> Power of a Number  Using Recursion is : <=============" << endl;
    cout << "  Result is : " << power(m, n) << endl;

    cout << " ====> Power of a Number  Using Recursion is (Using Less number of operation ) : <=============" << endl;
    cout << "  Result is : " << power(m, n) << endl;
}