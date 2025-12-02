#include <iostream>
#include <stdio.h>
using namespace std;

void findDuplicates(int *arr, int size)
{
    int lastDuplicate = 0; // Constant difference that should remain the same

    for (int i = 0; i < size; i++)
    {

        if ((arr[i] == arr[i + 1]) && arr[i] != lastDuplicate)
        {
            cout << "Duplicate is : " << arr[i] << endl;
            lastDuplicate = arr[i];
            int j = i + 1;
            while (arr[i] == arr[j])
                j++;

            cout << arr[i] << " Appear  " << j - i << " Times in array " << endl;
            i = j - 1;
        }
    }
}

int main()
{
    int arr[] = {3, 6, 8, 8, 10, 11, 12, 12, 15, 15, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "==========================================\n";
    cout << "    FINDING DUPLICATES IN SORTED ARRAY\n";
    cout << "==========================================\n\n";

    cout << "Array: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]\n\n";

    cout << "Duplicates are \n";
    findDuplicates(arr, size);

    return 0;
}