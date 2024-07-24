/*
2191. Sort the Jumbled Numbers.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution
{
public:
    // Function to get the mapped value of an integer
    int getMappedValue(int num, const std::vector<int> &mapping)
    {
        std::string str_num = std::to_string(num);
        std::string mapped_str;
        for (char ch : str_num)
        {
            mapped_str += std::to_string(mapping[ch - '0']);
        }
        return std::stoi(mapped_str);
    }

    std::vector<int> sortJumbled(std::vector<int> &mapping,
                                 std::vector<int> &nums)
    {
        // Pair the numbers with their mapped values
        std::vector<std::pair<int, int>> mapped_nums;
        for (int num : nums)
        {
            mapped_nums.push_back({getMappedValue(num, mapping), num});
        }

        // Sort based on the mapped values, maintaining relative order for equal
        // mapped values
        std::stable_sort(
            mapped_nums.begin(), mapped_nums.end(),
            [](const std::pair<int, int> &a, const std::pair<int, int> &b)
            {
                return a.first < b.first;
            });

        // Extract the sorted numbers
        std::vector<int> result;
        for (const auto &pair : mapped_nums)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};