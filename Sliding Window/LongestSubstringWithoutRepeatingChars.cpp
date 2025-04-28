/*
Sliding Window: Used for problems involving subarrays/substrings.
Use sliding window to optimize time complexity from O(n^2) to O(n)
*/

// Longest Substring Without Repeating Characters

#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> myMap;
        int result = 0, index = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (myMap.find(s[i]) != myMap.end() && myMap[s[i]] >= index)
            {
                index = myMap[s[i]] + 1;
            }
            myMap[s[i]] = i;
            result = max(result, i - index + 1);
        }
        return result;
    }
};