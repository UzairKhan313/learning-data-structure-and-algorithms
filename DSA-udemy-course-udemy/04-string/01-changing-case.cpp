#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char A[6] = "ABHQG";

    int i = 0;
    for (i; A[i] != '\0'; i++)
    {
        A[i] = A[i] + 32;
    }

    cout << "Toggle Case " << endl;
    cout << A << " ";

    char B[] = "AbCdEGiLMn";
    int j = 0;
    for (j; B[j] != '\0'; j++)
    {

        if (B[j] >= 65 && B[j] <= 90)
        {
            B[j] = B[j] + 32;
        }
        else if (B[j] >= 'a' && B[j] <= 122)
        {

            B[j] = B[j] - 32;
        }
    }

    cout << endl;

    cout << "After Toggle " << B << endl;
    return 0;
}
