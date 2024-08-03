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
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = i + 2; k < n; k++)
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
    std::string s = to_string(11891);
    std::string max = s, min = s;

    int n = 0;
    for (char c : s)
    {
        if (c - '0' != 9)
        {
            n = c - '0';
            break;
        }
    }

    for (int i = 0; i < max.size(); i++)
    {
        if (max[i] - '0' == n)
        {
            max[i] = '9';
        }
    }

    int m = 0;
    for (char c : s)
    {
        if (c - '0' != 0)
        {
            m = c - '0';
            break;
        }
    }

    for (int i = 0; i < min.size(); i++)
    {
        if (min[i] - '0' == m)
        {
            min[i] = '0';
        }
    }

    int num = stoi(max) - stoi(min);
    std::cout << num << std::endl;
    return 0;
}
