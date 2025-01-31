#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort, find, distance, max_element, min_element, partial_sort, stable_sort, reverse, unique, merge, remove

/*
(1) Vector Initialization
(2) Adding elements
(3) Removing elements
(4) Accessing elements
(5) Max & Min element
(6) Specific element
(7) Specific element with condition
(8) Sorting
(9) Size & Capacity
(10) Swapping Vectors
(11) Removing Duplicates
(12) Merge Two Sorted Vectors
(13) Binary Search
(14) Lower & Upper Bound
(15) Remove Elements by Value
(16) Reverse Iteration
(17) Assigning New Values
*/

int main(void)
{
    // #[01] Vector Initialization
    std::vector<int> nums = {10, 20, 70};
    std::vector<int> nums2(nums);
    std::vector<int> nums3(nums.begin(), nums.end());
    std::vector<int> nums4;
    nums4 = nums;
    std::vector<int> nums5(5, 10);
    std::vector<int> nums6(std::move(nums4));
    
    // #[02] Adding elements
    nums.push_back(40);
    nums.emplace_back(50);
    nums.insert(nums.begin(), 1);
    nums.insert(nums.begin() + 2, 100);
    nums.insert(nums.end(), 60);
    nums.insert(nums.begin() + 1, {70, 80, 90});
    nums2.insert(nums2.end(), nums.begin(), nums.end());
    
    // #[03] Removing elements
    nums.pop_back();
    nums.erase(nums.begin());
    nums.erase(nums.begin() + 2);
    nums.erase(nums.begin() + 1, nums.begin() + 3);
    nums3.clear();
    nums3.resize(5);
    
    // #[04] Accessing elements
    std::cout << "First element: " << nums[0] << std::endl;
    std::cout << "Last element: " << nums.back() << std::endl;
    std::cout << "First element (front): " << nums.front() << std::endl;
    std::cout << "Element at index 2: " << nums.at(2) << std::endl;
    
    // #[05] Max & Min element
    std::cout << "Largest Number: " << *std::max_element(nums.begin(), nums.end()) << std::endl;
    std::cout << "Smallest Number: " << *std::min_element(nums.begin(), nums.end()) << std::endl;
    
    // #[06] Specific element
    auto it4 = std::find(nums.begin(), nums.end(), 100);
    if (it4 != nums.end())
        std::cout << "Found 100 at position: " << std::distance(nums.begin(), it4) << std::endl;
    
    // #[07] Find element with condition
    auto it5 = std::find_if(nums.begin(), nums.end(), [](int x) { return x > 70; });
    if (it5 != nums.end())
        std::cout << "First element greater than 70 is at position: " << std::distance(nums.begin(), it5) << std::endl;
    
    // #[08] Sorting
    std::reverse(nums.begin(), nums.end());
    std::sort(nums.begin(), nums.end());
    std::partial_sort(nums.begin(), nums.begin() + 3, nums.end());
    std::stable_sort(nums.begin(), nums.end());
    std::sort(nums.begin(), nums.end(), std::greater<int>());
    std::sort(nums.begin(), nums.end(), [](int a, int b) { return a % 10 < b % 10; });
    
    // #[09] Size & Capacity
    std::cout << "Size: " << nums.size() << std::endl;
    std::cout << "Capacity: " << nums.capacity() << std::endl;
    nums.reserve(20);
    nums.shrink_to_fit();
    nums.resize(10, 0);
    
    // #[10] Swapping Vectors
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    vec1.swap(vec2);
    
    // #[11] Removing Duplicates
    std::sort(nums.begin(), nums.end());
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
    
    // #[12] Merge Two Sorted Vectors
    std::vector<int> merged(nums.size() + nums2.size());
    std::merge(nums.begin(), nums.end(), nums2.begin(), nums2.end(), merged.begin());
    
    // #[13] Binary Search
    bool found = std::binary_search(nums.begin(), nums.end(), 50);
    std::cout << "Binary search for 50: " << (found ? "Found" : "Not Found") << std::endl;
    
    // #[14] Lower & Upper Bound
    auto lower = std::lower_bound(nums.begin(), nums.end(), 50);
    auto upper = std::upper_bound(nums.begin(), nums.end(), 50);
    
    // #[15] Remove Elements by Value
    nums.erase(std::remove(nums.begin(), nums.end(), 50), nums.end());
    
    // #[16] Reverse Iteration
    std::cout << "Reverse iteration: ";
    for (auto it = nums.rbegin(); it != nums.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    
    // #[17] Assigning New Values
    nums.assign(5, 100);
    
    return 0;
}
