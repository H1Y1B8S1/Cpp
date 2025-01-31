#include <iostream>
#include <vector>
#include <algorithm> // sort, find, reverse, unique, merge, remove, etc.
#include <memory>    // for std::unique_ptr
#include <numeric>   // for std::iota
#include <cassert>   // for assert

/*
This file covers all major functionalities of std::vector in C++:
1. Initialization
2. Adding elements
3. Removing elements
4. Accessing elements
5. Size and capacity
6. Sorting and searching
7. Removing duplicates
8. Merging vectors
9. Swapping vectors
10. Move semantics
11. Custom allocators
12. Data access
13. Resizing
14. Comparison
15. Reverse iteration
16. Assigning new values
17. Advanced features (e.g., std::vector<bool>, custom comparators, exception safety, etc.)
*/

int main(void)
{
    // #[01] Vector Initialization
    std::vector<int> nums = {10, 20, 70}; // Initializer list
    std::vector<int> nums2(nums);         // Copy constructor
    std::vector<int> nums3(nums.begin(), nums.end()); // Range constructor
    std::vector<int> nums4;
    nums4 = nums;                         // Copy assignment
    std::vector<int> nums5(5, 10);        // Fill constructor (5 elements with value 10)
    std::vector<int> nums6(std::move(nums4)); // Move constructor

    // #[02] Adding elements
    nums.push_back(40);                   // Add element to the end
    nums.emplace_back(50);                // Construct element in-place at the end
    nums.insert(nums.begin(), 1);         // Insert at the beginning
    nums.insert(nums.begin() + 2, 100);   // Insert at a specific position
    nums.insert(nums.end(), 60);          // Insert at the end
    nums.insert(nums.begin() + 1, {70, 80, 90}); // Insert multiple elements
    nums2.insert(nums2.end(), nums.begin(), nums.end()); // Insert range

    // #[03] Removing elements
    nums.pop_back();                      // Remove last element
    nums.erase(nums.begin());             // Remove first element
    nums.erase(nums.begin() + 2);         // Remove element at index 2
    nums.erase(nums.begin() + 1, nums.begin() + 3); // Remove range of elements
    nums3.clear();                        // Clear all elements
    nums3.resize(5);                      // Resize to 5 elements (default-initialized)

    // #[04] Accessing elements
    std::cout << "First element: " << nums[0] << std::endl;          // Access via []
    std::cout << "Last element: " << nums.back() << std::endl;       // Access last element
    std::cout << "First element (front): " << nums.front() << std::endl; // Access first element
    std::cout << "Element at index 2: " << nums.at(2) << std::endl;  // Access with bounds checking

    // #[05] Size and capacity
    std::cout << "Size: " << nums.size() << std::endl;               // Number of elements
    std::cout << "Capacity: " << nums.capacity() << std::endl;       // Current capacity
    nums.reserve(20);                                                // Reserve space
    nums.shrink_to_fit();                                            // Reduce capacity to fit size
    nums.resize(10, 0);                                              // Resize and fill with 0

    // #[06] Sorting and searching
    std::reverse(nums.begin(), nums.end());                          // Reverse elements
    std::sort(nums.begin(), nums.end());                             // Sort in ascending order
    std::partial_sort(nums.begin(), nums.begin() + 3, nums.end());   // Partial sort
    std::stable_sort(nums.begin(), nums.end());                      // Stable sort
    std::sort(nums.begin(), nums.end(), std::greater<int>());        // Sort in descending order
    std::sort(nums.begin(), nums.end(), [](int a, int b) {           // Custom comparator
        return a % 10 < b % 10;
    });

    // #[07] Removing duplicates
    std::sort(nums.begin(), nums.end());                             // Sort first
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());   // Remove duplicates

    // #[08] Merging vectors
    std::vector<int> merged(nums.size() + nums2.size());
    std::merge(nums.begin(), nums.end(), nums2.begin(), nums2.end(), merged.begin());

    // #[09] Swapping vectors
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    vec1.swap(vec2);                                                 // Swap contents

    // #[10] Move semantics
    std::vector<int> nums8 = std::move(nums);                        // Move constructor
    std::cout << "Size after move: " << nums.size() << std::endl;    // Should be 0

    // #[11] Custom allocators
    std::vector<int, std::allocator<int>> nums7;                     // Using default allocator

    // #[12] Data access
    int* dataPtr = nums8.data();                                     // Access underlying array
    std::cout << "Data pointer: " << dataPtr[0] << std::endl;

    // #[13] Resizing with default value
    nums8.resize(15, 999);                                           // Resize and fill with 999
    std::cout << "After resize: ";
    for (int x : nums8) std::cout << x << " ";
    std::cout << std::endl;

    // #[14] Comparison
    if (nums8 == nums7)
        std::cout << "Vectors are equal" << std::endl;
    else
        std::cout << "Vectors are not equal" << std::endl;

    // #[15] Reverse iteration
    std::cout << "Reverse iteration: ";
    for (auto it = nums8.rbegin(); it != nums8.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // #[16] Assigning new values
    nums8.assign(5, 100);                                            // Assign 5 elements with value 100

    // #[17] Advanced features
    // std::vector<bool> specialization
    std::vector<bool> boolVec = {true, false, true};
    boolVec.flip();                                                  // Flip all bits
    std::cout << "Flipped bool vector: ";
    for (bool b : boolVec) std::cout << b << " ";
    std::cout << std::endl;

    // Move-only types (e.g., std::unique_ptr)
    std::vector<std::unique_ptr<int>> ptrVec;
    ptrVec.push_back(std::make_unique<int>(10));
    ptrVec.push_back(std::make_unique<int>(20));

    // Exception safety
    try {
        nums8.at(100) = 10; // Throws std::out_of_range
    } catch (const std::out_of_range& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Custom comparison functions
    auto customCompare = [](int a, int b) { return a > b; };
    std::sort(nums8.begin(), nums8.end(), customCompare);

    // Advanced algorithms
    std::rotate(nums8.begin(), nums8.begin() + 2, nums8.end());      // Rotate elements
    std::nth_element(nums8.begin(), nums8.begin() + 3, nums8.end()); // Find nth element

    return 0;
}