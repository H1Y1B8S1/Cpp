#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        if (static_cast<int>(coordinates[0]) % 2 == 0 &&
            (coordinates[1] - '0') % 2 == 0)
            return true;
        else if (static_cast<int>(coordinates[0]) % 2 != 0 &&
                 (coordinates[1] - '0') % 2 != 0)
            return true;
        else
            return false;
    }
};

int main(void)
{
    Solution sol;
    // vector<int> op = sol.selfDividingNumbers(1, 22);

    std::string s = "a1";
    std::cout << static_cast<int>(s[0]) % 2 << " ";
    std::cout << static_cast<int>('1') << " \n";

    std::cout << abs(1 - 4) << " \n";

    return 0;
}
