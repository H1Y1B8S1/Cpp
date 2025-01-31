#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {1, 70, 100, 20, 70, 60};

    std::reverse(nums.begin(), nums.end());                        // Reverses the vector
    std::sort(nums.begin(), nums.end());                           // Sorts the vector in ascending order
    std::partial_sort(nums.begin(), nums.begin() + 3, nums.end()); // Partially sorts the first 3 elements
    std::stable_sort(nums.begin(), nums.end());                    // Stable sort in ascending order
    std::sort(nums.begin(), nums.end(), std::greater<int>());      // Sorts the vector in descending order
    std::sort(nums.begin(), nums.end(), [](int a, int b)
              { return a % 10 < b % 10; }); // Sorts based on remainder when divided by 10
    std::sort(nums.begin(), nums.end(), [](int a, int b)
              { return a < b; }); // Custom comparator for ascending order

    return 0;
}
