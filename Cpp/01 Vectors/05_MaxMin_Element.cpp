#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {1, 70, 100, 20, 70, 60};

    // Max & Min element
    auto it2 = std::max_element(nums.begin(), nums.end());
    std::cout << "Largest Number: " << *it2 << std::endl;

    auto it3 = std::min_element(nums.begin(), nums.end());
    std::cout << "Smallest Number: " << *it3 << std::endl;

    return 0;
}
