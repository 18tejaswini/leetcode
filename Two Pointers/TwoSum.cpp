/*
Two Pointers: Used for problems involving sorted arrays, linked lists or string manipulation.
Use Two Pointers to move towards or away from each other.
*/
// Two Sum (Sorted Array)

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        unordered_map<int, int> myMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (myMap.find(nums[i]) != myMap.end())
            {
                result.push_back(myMap[nums[i]]);
                result.push_back(i);
                break;
            }
            myMap[target - nums[i]] = i;
        }
        return result;
    }
};