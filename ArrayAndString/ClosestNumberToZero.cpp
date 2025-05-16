/*
Given an integer array nums of size n, return the number with the value closest to 0 in nums.
If there are multiple answers, return the number with the largest value.
*/

#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        int value = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (abs(value) > abs(nums[i]) ||
                (abs(value) == abs(nums[i]) && (value < nums[i])))
            {
                value = nums[i];
            }
        }
        return value;
    }
};