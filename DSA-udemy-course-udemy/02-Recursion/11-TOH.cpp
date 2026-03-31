#include <iostream>
using namespace std;

// Tower of Hanoi Problem.
int step = 0;
void TOH(int n, int a, int b, int c)
{

    if (n == 0)
    {
        return;
    }
    else
    {
        step++;
        TOH(n - 1, a, c, b);
        cout << "Move Disk " << n << " From Tower " << a << " to " << c << endl;
        TOH(n - 1, b, a, c);
    }
}

int main()
{
    cout << " ====>Tower of Hanoi Problem : <=============" << endl;
    TOH(3, 1, 2, 3);
    cout << endl;
    cout << "Total Steps are : " << step << endl;
}