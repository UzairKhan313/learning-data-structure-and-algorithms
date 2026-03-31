#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    cout << "===========================\n";
    cout << "CHECKING THE TWO STRING ITS ANAGRAM OR NOT \n";
    cout << "The two string anagram only when it have same length and same character inside it. \n";
    cout << "===========================\n";

    char A[] = "decimal";
    char B[] = "medical";
    int x = 97; // ASCII of lower alphabest start from 97;
    int H[] = {26, 0};

    for (int i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97] += 1;
    }

    for (int j = 0; B[j] != '\0'; j++)
    {
        H[B[j] - 97] -= 1;
        if (H[B[j] - 97] < 0)
        {
            cout << "These Strings are not Anagram " << endl;
            break;
        }
    }

    return 0;
}
