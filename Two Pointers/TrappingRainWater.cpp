/*
Two Pointers: Used for problems involving sorted arrays, linked lists or string manipulation.
Use Two Pointers to move towards or away from each other.
*/
// Trapping Rain Water

#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int quan = 0, i = 0, j = height.size() - 1, left = height[i], right = height[j];
        while (i < j)
        {
            if (left <= right)
            {
                quan += left - height[i];
                i++;
                left = max(left, height[i]);
            }
            else
            {
                quan += right - height[j];
                j--;
                right = max(right, height[j]);
            }
        }
        return quan;
    }
};