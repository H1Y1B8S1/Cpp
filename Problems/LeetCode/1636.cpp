/*
1636. Sort Array by Increasing Frequency
*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

std::vector<int> frequencySort(std::vector<int> &nums)
{
    // Step 1: Count the frequency of each element
    std::unordered_map<int, int> frequency;
    for (int num : nums)
    {
        frequency[num]++;
    }

    // Step 2: Create a vector of pairs (element, frequency)
    std::vector<std::pair<int, int>> elements;
    for (const auto &entry : frequency)
    {
        elements.emplace_back(entry.first, entry.second);
    }

    // Step 3: Sort the elements
    std::sort(elements.begin(), elements.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b)
              {
                  // Sort primarily by frequency in increasing order
                  if (a.second != b.second)
                      return a.second < b.second;
                  // If frequencies are the same, sort by value in decreasing order
                  return a.first > b.first; });

    // Step 4: Reconstruct the sorted array based on frequency and value
    std::vector<int> sortedArray;
    for (const auto &element : elements)
    {
        sortedArray.insert(sortedArray.end(), element.second, element.first);
    }
    return sortedArray;
}

int main(void)
{
    // Example 1
    std::vector<int> nums1 = {1, 1, 2, 2, 2, 3};
    std::vector<int> sorted1 = frequencySort(nums1);
    std::cout << "Sorted array for example 1: ";
    for (int num : sorted1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Example 2
    std::vector<int> nums2 = {2, 3, 1, 3, 2};
    std::vector<int> sorted2 = frequencySort(nums2);
    std::cout << "Sorted array for example 2: ";
    for (int num : sorted2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Example 3
    std::vector<int> nums3 = {-1, 1, -6, 4, 5, -6, 1, 4, 1};
    std::vector<int> sorted3 = frequencySort(nums3);
    std::cout << "Sorted array for example 3: ";
    for (int num : sorted3)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}