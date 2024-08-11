#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<int> luckyNumbers(std::vector<std::vector<int>> &matrix)
    {
        std::vector<int> row, col, result;

        for (int i = 0; i < matrix.size(); i++)
        {
            std::vector<int> temp;
            for (int j = 0; j < matrix[i].size(); j++)
            {
                temp.push_back(matrix[i][j]);
            }
            auto it = std::min_element(temp.begin(), temp.end());
            row.push_back(*it);
        }

        int j = 0;
        while (j != matrix[0].size())
        {
            std::vector<int> temp;
            for (int i = 0; i < matrix.size(); i++)
            {
                temp.push_back(matrix[i][j]);
            }
            auto it = std::max_element(temp.begin(), temp.end());
            col.push_back(*it);
            j++;
        }
        
        for (int i = 0; i < row.size(); i++)
        {
            if (std::find(col.begin(), col.end(), row[i]) != col.end())
            {
                result.push_back(row[i]);
            }
        }

        return result;
    }
};

int main(void)
{
    Solution sol;

    std::vector<std::vector<int>> matrix = {{3, 7, 8}, {9, 11, 13}, {15, 16, 17}};

    std::vector<int> ans = sol.luckyNumbers(matrix);

    for (int n : ans)
    {
        std::cout << n << ",";
    }

    return 0;
}