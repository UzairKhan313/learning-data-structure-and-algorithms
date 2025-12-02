#include <iostream>
#include <stdio.h>
using namespace std;

void findTheMissingNumber1(int *arr)
{
    int size = sizeof(arr) + 1;

    int sum = (arr[size - 1] * (arr[size - 1] + 1)) / 2;
    int sumOfArray = 0;

    for (int i = 0; i < size; i++)
    {
        sumOfArray = sumOfArray + arr[i];
    }

    if (sumOfArray != sum)
    {
        cout << "The Missing Number in the sequence is " << sum - sumOfArray << endl;
    }
}

void findTheMissingNumber2(int *arr)
{
    int lower = arr[0];
    int size = sizeof(arr);
    int diff = lower - 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "Missing number is " << diff + i << endl;
            break;
        }
    }
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int arr2[10] = {10, 11, 12, 14, 15, 16, 17, 18, 19, 20};

    cout << "==========================================\n";
    cout << "    FINDING MISSING NUMBER IN A SEQUENCE\n";
    cout << "==========================================\n\n";

    cout << "\n";
    cout << " Missing Number in array 1 is : " << endl;
    findTheMissingNumber1(arr);
    cout << endl;
    cout << endl;
    cout << " Missing Number in array 2 is : " << endl;
    findTheMissingNumber2(arr2);

    return 0;
}