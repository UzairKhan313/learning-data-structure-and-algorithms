#include <iostream>
#include <stdio.h>
using namespace std;

void findDuplicates(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 1;

        // Skip if already marked as duplicate
        if (arr[i] == -1)
            continue;

        for (int j = i + 1; j < size; j++) // Fixed: j < size instead of i < size
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }

        // Print if duplicate found
        if (count > 1)
        {
            cout << arr[i] << " appears " << count << " times" << endl;
        }
    }
}

int main()
{
    cout << "Hello world;";
    int arr[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\n==========================================\n";
    cout << "    FINDING DUPLICATES IN UN SORTED ARRAY\n";
    cout << "==========================================\n\n";

    cout << "Array: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]\n\n";

    cout << "Duplicates are: \n";
    findDuplicates(arr, size);

    return 0;
}