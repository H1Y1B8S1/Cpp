/*
std::set:
Purpose: Used to store a collection of unique, sorted elements.
Implementation: Internally implemented as a balanced binary search tree.
Key Points:
Elements are sorted in ascending order.
Each element is unique.
No direct access to elements using keys (only iterators).
*/

#include <iostream>
#include <set>
#include <unordered_set>

int main()
{
    // Ordered Set (std::set)
    std::set<int> orderedSet;

    // Inserting elements
    orderedSet.insert(5);
    orderedSet.insert(2);
    orderedSet.insert(8);

    // Iterating over elements
    std::cout << "Ordered Set elements: ";
    for (const auto &element : orderedSet)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    // Searching for an element
    auto findElement = orderedSet.find(5);
    if (findElement != orderedSet.end())
    {
        std::cout << "Element 5 found in orderedSet.\n";
    }
    else
    {
        std::cout << "Element 5 not found in orderedSet.\n";
    }

    // Counting elements
    int countOf5 = orderedSet.count(5);   // Returns 1
    int countOf10 = orderedSet.count(10); // Returns 0
    std::cout << "Count of 5 in orderedSet: " << countOf5 << "\n";
    std::cout << "Count of 10 in orderedSet: " << countOf10 << "\n";

    // Removing an element
    orderedSet.erase(2);

    // Clearing the set
    orderedSet.clear();

    // Unordered Set (std::unordered_set)
    std::unordered_set<int> unorderedSet;

    // Inserting elements
    unorderedSet.insert(10);
    unorderedSet.insert(20);
    unorderedSet.insert(30);

    // Iterating over elements
    std::cout << "Unordered Set elements: ";
    for (const auto &element : unorderedSet)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    // Searching for an element
    auto findUnorderedElement = unorderedSet.find(20);
    if (findUnorderedElement != unorderedSet.end())
    {
        std::cout << "Element 20 found in unorderedSet.\n";
    }
    else
    {
        std::cout << "Element 20 not found in unorderedSet.\n";
    }

    // Counting elements
    int countOf20 = unorderedSet.count(20); // Returns 1
    int countOf40 = unorderedSet.count(40); // Returns 0
    std::cout << "Count of 20 in unorderedSet: " << countOf20 << "\n";
    std::cout << "Count of 40 in unorderedSet: " << countOf40 << "\n";

    // Removing an element
    unorderedSet.erase(30);

    // // Bucket Interface (Unordered Set)
    // for (std::size_t i = 0; i < unorderedSet.bucket_count(); ++i)
    // {
    //     std::cout << "Bucket " << i << ": ";
    //     for (const auto &element : unorderedSet.bucket(i))
    //     {
    //         std::cout << element << " ";
    //     }
    //     std::cout << "\n";
    // }

    // Load Factor (Unordered Set)
    float loadFactor = unorderedSet.load_factor();
    std::cout << "Load Factor: " << loadFactor << "\n";

    return 0;
}
