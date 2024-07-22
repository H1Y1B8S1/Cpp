/*
2965. Find Missing and Repeated Values
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        std::vector<int> tMap(n * n, 0);

        int mul = 0, miss = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                tMap[grid[i][j] - 1]++;
            }
        }

        for (int i = 0; i < tMap.size(); i++)
        {
            if (tMap[i] == 2)
            {
                mul = i + 1;
            }
            if (tMap[i] == 0)
            {
                miss = i + 1;
            }
        }

        return {mul, miss};
    }
};

int main()
{
    Solution sol;

    std::vector<std::vector<int>> grid1 = {{1, 3}, {2, 2}};
    std::vector<int> result1 = sol.findMissingAndRepeatedValues(grid1);
    std::cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << std::endl;

    return 0;
}