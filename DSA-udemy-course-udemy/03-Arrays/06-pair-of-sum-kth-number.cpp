#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// Function that takes a vector and creates another vector with size = max element
void pairOfNumber(const vector<int> &nums, int sum)
{

    // Find maximum element in the vector
    int maxElement = *max_element(nums.begin(), nums.end());

    // Create a new vector with size equal to maxElement
    // Note: size() returns size_t, maxElement is int
    vector<int> newVector(maxElement + 1, 0);

    for (size_t i = 0; i < nums.size(); i++)
    {
        int diff = sum - nums[i];

        if (diff > 0 && newVector[diff] != 0)
        {

            cout << " Pair is  " << sum - nums[i] << " " << nums[i] << endl;
        }
        newVector[nums[i]]++;
    }
}

int main()
{
    vector<int> input = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int size = input.size();

    cout << "==========================================\n";
    cout << "    FINDING DUPLICATES IN SORTED ARRAY\n";
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