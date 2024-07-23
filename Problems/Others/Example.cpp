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
    // Initialize the vector with given values
    std::vector<int> vec = {-1, 1, -6, 4, 5, -6, 1, 4, 1};

    // Create an ordered map to count occurrences of each integer
    std::map<int, int> countMap;

    // Iterate over the vector and count the occurrences
    for (int num : vec) {
        countMap[num]++;
    }

    // Display the count of each integer
    std::cout << "Counts of each integer:" << std::endl;
    for (const auto& pair : countMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
