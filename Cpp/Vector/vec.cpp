#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort, find, distance

/*
(1) Vector Initialization
(2) Adding elements
(3) Removing elements
(4) Accessing elements
*/

int main(void)
{
    // #[01] Vector Initialization
    std::vector<int> nums = {10, 20, 30};             // Initialization with a list of values
    std::vector<int> nums2(nums);                     // Copy constructor
    std::vector<int> nums3(nums.begin(), nums.end()); // Range constructor
    std::vector<int> nums4;                           // Default constructor
    nums4 = nums;
    std::vector<int> nums5(5, 10);            // A vector of size 5, all the values are 10
    std::vector<int> nums6(std::move(nums4)); // Move constructor

    // #[02] Adding elements
    nums.push_back(40);                                  // Adds an element to the end of the vector
    nums.emplace_back(50);                               // Constructs and adds an element to the end of the vector
    nums.insert(nums.begin(), 1);                        // Inserts an element at the beginning
    nums.insert(nums.begin() + 2, 100);                  // Inserts an element at a specified position
    nums.insert(nums.end(), 60);                         // Inserts an element at the end
    nums.insert(nums.begin() + 1, {70, 80, 90});         // Inserts a list of elements at a specified position
    nums2.insert(nums2.end(), nums.begin(), nums.end()); // Inserts a range of elements at the end of the vector

    // #[3] Removing elements
    nums.pop_back();
    nums.erase(nums.begin());                       // Removes the first element of the vector
    nums.erase(nums.begin() + 2);                   // Removes the element from the specified position
    nums.erase(nums.begin() + 1, nums.begin() + 3); // Removes a range of elements
    nums3.clear();                                  // Removes all elements from the vector
    nums3.resize(5);                                // Resizes the vector to contain 5 elements (truncating or adding elements)

    for (int num : nums)
    {
        std::cout << num << ",";
    }
    std::cout << std::endl;
    
    // #[4] Accessing elements
    std::cout << "First element: " << nums[0] << std::endl;
    std::cout << "Last element: " << nums.back() << std::endl;

    return 0;
}
