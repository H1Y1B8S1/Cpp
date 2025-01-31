#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {10, 20, 70};             // Initialization with a list of values
    std::vector<int> nums2(nums);                     // Copy constructor
    std::vector<int> nums3(nums.begin(), nums.end()); // Range constructor
    std::vector<int> nums4;                           // Default constructor
    nums4 = nums;
    std::vector<int> nums5(5, 10);            // A vector of size 5, all the values are 10
    std::vector<int> nums6(std::move(nums4)); // Move constructor

    return 0;
}
