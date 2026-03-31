#include <iostream>
#include <stdio.h>
using namespace std;

int binarySearch(int *arr, int x)
{
    int lower = 0;
    int size = sizeof(arr);
    int higher = size - 1;
    while (lower <= higher)
    {
        int mid = (lower + higher) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            lower = mid + 1;
        }
        else
        {
            higher = mid - 1;
        }
    }

    return -1;
}

int binarySearchUsingRecursion(int *arr, int l, int h, int key)
{

    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {

            int lower = mid + 1;
            return binarySearchUsingRecursion(arr, lower, h, key);
        }
        else
        {
            int higher = mid - 1;
            return binarySearchUsingRecursion(arr, l, higher, key);
        }
    }

    return -1;
}

int main()
{
    int arr[13] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78, 89, 90};
    int size = 13;

    cout << "==========================================\n";
    cout << "    BINARY SEARCH TEST PROGRAM\n";
    cout << "==========================================\n\n";

    cout << "Test Array: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]\n\n";

    // Test cases for iterative binarySearch function
    cout << "TESTING ITERATIVE BINARY SEARCH FUNCTION:\n";
    cout << "----------------------------------------\n";

    // Test case 1: Search for existing element
    cout << "Test Case 1: Searching for element 45\n";
    int result1 = binarySearch(arr, 45);
    cout << "Result: " << result1 << endl
         << endl;

    // Test case 2: Search for element at beginning
    cout << "Test Case 2: Searching for element 2\n";
    int result2 = binarySearch(arr, 2);
    cout << "Result: " << result2 << endl
         << endl;

    // Test case 3: Search for element that doesn't exist
    cout << "Test Case 3: Searching for element 100 (not in array)\n";
    int result3 = binarySearch(arr, 100);
    cout << "Result: " << result3 << endl
         << endl;

    // Test cases for recursive binarySearchUsingRecursion function
    cout << "TESTING RECURSIVE BINARY SEARCH FUNCTION:\n";
    cout << "-----------------------------------------\n";

    // Test case 4: Search for existing element
    cout << "Test Case 4: Searching for element 23\n";
    int result4 = binarySearchUsingRecursion(arr, 0, size - 1, 23);
    cout << "Result: " << result4 << endl
         << endl;

    // Test case 5: Search for element at end
    cout << "Test Case 5: Searching for element 90\n";
    int result5 = binarySearchUsingRecursion(arr, 0, size - 1, 90);
    cout << "Result: " << result5 << endl
         << endl;

    // Test case 6: Search for element that doesn't exist
    cout << "Test Case 6: Searching for element 50 (not in array)\n";
    int result6 = binarySearchUsingRecursion(arr, 0, size - 1, 50);
    cout << "Result: " << result6 << endl
         << endl;

    cout << "\n==========================================\n";
    cout << "      ALL TESTS COMPLETED\n";
    cout << "==========================================\n";

    return 0;
}