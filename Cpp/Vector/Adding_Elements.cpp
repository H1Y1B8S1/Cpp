#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {10, 20, 70};
    std::vector<int> nums2(3,10);

    nums.push_back(40);                                  // Adds an element to the end of the vector
    nums.emplace_back(50);                               // Constructs and adds an element to the end of the vector
    nums.insert(nums.begin(), 1);                        // Inserts an element at the beginning
    nums.insert(nums.begin() + 2, 100);                  // Inserts an element at a specified position
    nums.insert(nums.end(), 60);                         // Inserts an element at the end
    nums.insert(nums.begin() + 1, {70, 80, 90});         // Inserts a list of elements at a specified position
    nums2.insert(nums2.end(), nums.begin(), nums.end()); // Inserts a range of elements at the end of the vector

    for (int n : nums)
    {
        std::cout << n << ",";
    }
    std::cout << std::endl;

    for (int n : nums2)
    {
        std::cout << n << ",";
    }
    std::cout << std::endl;

    return 0;
}
