#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> op = {};
        for (int i = left; i <= right; i++)
        {
            vector<int> temp = {};
            int num = i;
            bool flag = true;

            while (num != 0)
            {
                int digi = num % 10;

                temp.push_back(digi);
                num /= 10;
            }
            std::cout << "->";

            for (int d : temp)
            {
                std::cout << d << " ";
                if (d == 0 || i % d != 0)
                    flag = false;
            }
            if (flag)
            {
                op.push_back(i);
            }
        }
        return op;
    }
};

int main(void)
{
    Solution sol;
    vector<int> op = sol.selfDividingNumbers(1, 22);
    for (int i : op)
    {
        std::cout << i << " ";
    }
    return 0;
}