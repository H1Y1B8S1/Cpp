#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 70, 100, 20, 70, 60};

    // Size and Capacity
    std::cout << "Size: " << nums.size() << std::endl;
    std::cout << "Capacity: " << nums.capacity() << std::endl;
    nums.reserve(20);
    std::cout << "Is empty: " << (nums.empty() ? "Yes" : "No") << std::endl;
    nums.shrink_to_fit();
    nums.resize(10, 0);

    return 0;
}
