#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 70, 100, 20, 70, 60};

    std::cout << "First element: " << nums[0] << std::endl;
    std::cout << "Last element: " << nums.back() << std::endl;
    std::cout << "First element (front): " << nums.front() << std::endl; // Accessing the first element using front()
    std::cout << "Element at index 2: " << nums.at(2) << std::endl;      // Accessing element at a specific index with bounds checking

    std::vector<int>::iterator it = nums.begin(); // Using iterators to access elements
    std::cout << "First element using iterator: " << *it << std::endl;

    return 0;
}
