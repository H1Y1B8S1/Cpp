/*
2894. Divisible and Non-divisible Sums Difference
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int ans = 0;
        for (int i = 1; i < n + 1; i++)
        {
            if (i % m != 0)
                ans += i;
            else
                ans -= i;
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    int n = 10, m = 3;
    int result = sol.differenceOfSums(n, m);

    std::cout << result;
    return 0;
}