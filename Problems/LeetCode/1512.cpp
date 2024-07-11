/*
1512. Number of Good Pairs
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int pairs = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                    pairs++;
            }
        }

        return pairs;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 1, 1, 3};

    int result = sol.numIdenticalPairs(nums);
    std::cout<<result;
    return 0;
}