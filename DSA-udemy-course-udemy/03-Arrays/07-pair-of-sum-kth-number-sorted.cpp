#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// Function that takes a vector and creates another vector with size = max element
void pairOfNumber(const vector<int> &nums, int sum)
{
    int first = 0;
    int last = nums.size() - 1;

    cout << "Size of vector is " << nums.size();
    while (first < last)
    {
        if (nums[first] + nums[last] == sum)
        {
            cout << "Pair is " << nums[first] << " " << nums[last] << endl;
            first++;
            last--;
        }
        else if (nums[first] + nums[last] < sum)
        {
            first++; 
        }
        else
        {
            last--;
        }
    }
}

int main()
{
    vector<int> input = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int size = input.size();

    cout << "==========================================\n";
    cout << "    FINDING PAIR OF SUM IN SORTED ARRAY\n";
    cout << "==========================================\n\n";

    cout << "Vector : [";
    for (int i = 0; i < size; i++)
    {
        cout << input[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]\n\n";

    pairOfNumber(input, 9);

    return 0;
}