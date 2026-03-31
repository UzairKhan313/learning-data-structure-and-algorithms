#include <iostream>
#include <stdio.h>
using namespace std;

void permutation(char S[], int k)
{
    static int A[10] = {0};
    static char Res[10] = {0};
    int i;
    if (S[k] == '\0')
    {
        Res[k] = 0;
        cout << Res << " ";
    }
    else
    {

        for (i = 0; S[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                Res[k] = S[i];
                A[i] = 1;
                permutation(S, k + 1);
                A[i] = 0;
            }
        }
    }
}

int main()
{

    cout << "===========================\n";
    cout << "STRING PERMUTATION \n";
    cout << "===========================\n";
    char s[] = "ABC";
    permutation(s, 0);

    return 0;
}
