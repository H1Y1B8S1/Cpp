#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 70, 100, 20, 70, 60};

    // Removing elements
    nums.pop_back();
    nums.erase(nums.begin());
    nums.erase(nums.begin() + 2);
    nums.erase(nums.begin() + 1, nums.begin() + 3);
    nums.clear();
    nums.resize(5);

    for (int n : nums)
    {
        std::cout << n << ",";
    }
    std::cout << std::endl;

    return 0;
}
