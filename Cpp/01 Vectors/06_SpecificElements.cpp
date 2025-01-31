#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {1, 70, 100, 20, 70, 60};

    // Specific element (e.g., 100)
    auto it4 = std::find(nums.begin(), nums.end(), 100);
    if (it4 != nums.end())
        std::cout << "Found 100 at position: " << std::distance(nums.begin(), it4) << std::endl;
    else
        std::cout << "100 not found in the vector." << std::endl;

    // Specific element with condition
    auto it5 = std::find_if(nums.begin(), nums.end(), [](int x)
                            { return x > 70; });
    if (it5 != nums.end())
        std::cout << "First element greater than 70 is at position: " << std::distance(nums.begin(), it5) << std::endl;
    else
        std::cout << "No element greater than 70 found." << std::endl;

    return 0;
}
