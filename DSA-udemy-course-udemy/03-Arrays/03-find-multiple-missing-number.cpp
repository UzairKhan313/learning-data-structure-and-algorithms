#include <iostream>
#include <stdio.h>
using namespace std;

void findTheMissingNumber(int *arr, int size)
{
    int diff = arr[0] - 0; // Constant difference that should remain the same

    for (int i = 0; i < size; i++)
    {
        // If the current difference doesn't match the expected difference
        if (arr[i] - i != diff)
        {
            // Calculate the missing number
            int missing = diff + i;

            // Print all missing numbers up to the current element
            while (missing < arr[i])
            {
                cout << missing << endl;
                missing++;
            }

            // Update the diff for future comparisons
            // After finding missing numbers, the new diff should be arr[i] - i
            diff = arr[i] - i;
        }
    }
}

int main()
{
    int arr[] = {10, 11, 14, 15, 16, 19, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "==========================================\n";
    cout << "    FINDING MULTIPLE MISSING NUMBER IN A SEQUENCE\n";
    cout << "==========================================\n\n";

    cout << "Array: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]\n\n";

    cout << "Missing numbers:\n";
    findTheMissingNumber(arr, size);

    return 0;
}