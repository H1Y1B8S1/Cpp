#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
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
    std::cout << ']' - '[' << "\n";
    std::cout << ')' - '0' << "\n";
    std::cout << '}' - '0' << "\n";

    return 0;
}
