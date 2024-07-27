#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include<bitset>
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


int main() {
    int number = 42; // Example integer
    std::bitset<64> binary(number); // Convert integer to binary with 32 bits

    std::cout << "Binary representation of " << number << " is " << binary << std::endl;

    return 0;
}
