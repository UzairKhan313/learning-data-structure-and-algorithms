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

int nCr(int n, int r)
{
    int num, dem;
    num = fact(n);
    dem = fact(r) * fact(n - r);

    return num / dem;
}

int NCR(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }

    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

int main()
{
    cout << " ====> Finding the nCr of a Number : <=============" << endl;
    cout << "  Result is : " << nCr(4, 2) << endl;

    cout << " ====> Finding the NCR of a Number : <=============" << endl;
    cout << "  Result is : " << NCR(4, 2) << endl;
}