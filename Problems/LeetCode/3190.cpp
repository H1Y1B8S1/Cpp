/*
3190. Find Minimum Operations to Make All Elements Divisible by Three
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int minimumOperation(vector<int> &nums)
    {
        int operation = 0;
        for (int i : nums)
        {
            if (i % 3 != 0)
            {
                operation++;
            }
        }

        return operation;
    }
};

int main()
{
    vector<int> num = {1,2,3,4};
    Solution sol;
    int result = sol.minimumOperation(num);

    std::cout<<result;
    return 0;
}