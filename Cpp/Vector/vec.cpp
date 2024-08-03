#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort, find, distance

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
*/

int main(void)
{
    // #[01] Vector Initialization
    std::vector<int> nums = {10, 20, 70};             // Initialization with a list of values
    std::vector<int> nums2(nums);                     // Copy constructor
    std::vector<int> nums3(nums.begin(), nums.end()); // Range constructor
    std::vector<int> nums4;                           // Default constructor
    nums4 = nums;
    std::vector<int> nums5(5, 10);            // A vector of size 5, all the values are 10
    std::vector<int> nums6(std::move(nums4)); // Move constructor
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding elements
    nums.push_back(40);                                  // Adds an element to the end of the vector
    nums.emplace_back(50);                               // Constructs and adds an element to the end of the vector
    nums.insert(nums.begin(), 1);                        // Inserts an element at the beginning
    nums.insert(nums.begin() + 2, 100);                  // Inserts an element at a specified position
    nums.insert(nums.end(), 60);                         // Inserts an element at the end
    nums.insert(nums.begin() + 1, {70, 80, 90});         // Inserts a list of elements at a specified position
    nums2.insert(nums2.end(), nums.begin(), nums.end()); // Inserts a range of elements at the end of the vector
    /*_______________________________________________________________________________________________________*/

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
    /*_______________________________________________________________________________________________________*/

    // #[4] Accessing elements
    std::cout << "First element: " << nums[0] << std::endl;
    std::cout << "Last element: " << nums.back() << std::endl;
    std::cout << "First element (front): " << nums.front() << std::endl; // Accessing the first element using front()
    std::cout << "Element at index 2: " << nums.at(2) << std::endl;      // Accessing element at a specific index with bounds checking

    std::vector<int>::iterator it = nums.begin(); // Using iterators to access elements
    std::cout << "First element using iterator: " << *it << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[5] Max & Min value element
    auto it2 = std::max_element(nums.begin(), nums.end()); // Find max element
    int largestNum = *it2;
    std::cout << "Largest Number: " << largestNum << std::endl;

    auto it3 = std::min_element(nums.begin(), nums.end()); // Find min element
    int smallestNum = *it3;
    std::cout << "Smallest Number: " << smallestNum << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[6] Specific element (e.g., 100)
    auto it4 = std::find(nums.begin(), nums.end(), 100);
    if (it4 != nums.end())
        std::cout << "Found 100 at position: " << std::distance(nums.begin(), it4) << std::endl;
    else
        std::cout << "100 not found in the vector." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[7] Find the first occurrence of a specific value and get its position
    auto it5 = std::find_if(nums.begin(), nums.end(), [](int x)
                            { return x > 70; });
    if (it5 != nums.end())
        std::cout << "First element greater than 70 is at position: " << std::distance(nums.begin(), it5) << std::endl;
    else
        std::cout << "No element greater than 70 found." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[8] Sorting
    std::reverse(nums.begin(), nums.end());                        // Reverses the vector
    std::sort(nums.begin(), nums.end());                           // Sorts the vector in ascending order
    std::partial_sort(nums.begin(), nums.begin() + 3, nums.end()); // Partially sorts the first 3 elements
    std::stable_sort(nums.begin(), nums.end());                    // Stable sort in ascending order
    std::sort(nums.begin(), nums.end(), std::greater<int>());      // Sorts the vector in descending order
    std::sort(nums.begin(), nums.end(), [](int a, int b)
              { return a % 10 < b % 10; }); // Sorts based on remainder when divided by 10
    std::sort(nums.begin(), nums.end(), [](int a, int b)
              { return a < b; }); // Custom comparator for ascending order
    /*_______________________________________________________________________________________________________*/

    // #[9] Size and Capacity
    std::cout << "Size: " << nums.size() << std::endl;
    std::cout << "Capacity: " << nums.capacity() << std::endl;
    /*_______________________________________________________________________________________________________*/

    return 0;
}
