#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort, find, distance

/*
(1) Vector Initialization
(2) Adding elements
*/

int main(void)
{
    // #[01] Vector Initialization
    std::vector<int> nums = {10, 20, 30};             // Initialization with a list of values
    std::vector<int> nums2(nums);                     // Copy constructor
    std::vector<int> nums3(nums.begin(), nums.end()); // 3. Range constructor
    std::vector<int> nums4;                           // Default constructor
    nums4 = nums;
    std::vector<int> nums5(5, 10);            // A vector of size 5, all the values are 10
    std::vector<int> nums6(std::move(nums4)); // Move constructor

    // #[02] Adding elements
    nums.push_back(40);
    nums.emplace_back(50);
    nums.insert(nums.begin() + 2, 99);
    nums2.insert(nums2.end(), nums.begin(), nums.end());

    return 0;
}
