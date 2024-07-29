#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
using namespace std;

class Solution
{
public:
    int numTeams(vector<int> &rating)
    {
        int c = 0;
        int n = rating.size();
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i+1; j < n - 1; j++)
            {
                for (int k = i+2; k < n; k++)
                {
                    if ((rating[i] < rating[j] && rating[j] < rating[k]) ||
                        (rating[i] > rating[j] && rating[j] > rating[k]))
                    {
                        c++;
                        std::cout << rating[i] << rating[j] << rating[k] << " ";
                    }
                }
            }
        }
        return c;
    }
};

int main()
{
    std::vector<int> v = {3,6,7,5,1};

    Solution sol;

    int c = sol.numTeams(v);

    std::cout << c;
    return 0;
}
