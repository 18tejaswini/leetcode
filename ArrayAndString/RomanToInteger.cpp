/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Given a roman numeral, convert it to an integer.
*/

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> myMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 < s.length() && myMap[s[i]] < myMap[s[i + 1]])
            {
                result = result + (myMap[s[i + 1]] - myMap[s[i]]);
                i++;
            }
            else
            {
                result += myMap[s[i]];
            }
        }
        return result;
    }
};