#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm> // For std::for_each

/*
(1) Unordered Map Initialization
(2) Adding/Updating Elements
(3) Removing Elements
(4) Accessing Elements
(5) Finding Elements
(6) Iterating Over an Unordered Map
(7) Size and Capacity
(8) Checking for Existence
(9) Custom Hash Function and Equality Predicate
(10) Sorting by Value (with a std::vector)
*/

int main()
{
    // #[01] Unordered Map Initialization
    std::unordered_map<int, std::string> umap1; // Default constructor
    std::unordered_map<int, std::string> umap2 = {{1, "One"}, {2, "Two"}, {3, "Three"}}; // Initializer list
    std::unordered_map<int, std::string> umap3(umap2); // Copy constructor
    std::unordered_map<int, std::string> umap4(umap2.begin(), umap2.end()); // Range constructor

    std::cout << "Initialized umap2: ";
    for (const auto& [key, value] : umap2) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding/Updating Elements
    umap1[4] = "Four"; // Adds a new element
    umap1[5] = "Five"; // Adds another element
    umap1[4] = "FOUR"; // Updates the value of key 4

    umap1.insert({6, "Six"}); // Using insert to add an element
    umap1.insert(std::make_pair(7, "Seven")); // Another way to insert

    umap1.emplace(8, "Eight"); // Using emplace for in-place construction

    std::cout << "Unordered map after adding/updating elements: ";
    for (const auto& [key, value] : umap1) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[03] Removing Elements
    umap1.erase(4); // Removes the element with key 4
    umap1.erase(umap1.begin()); // Removes an element using iterator
    umap1.erase(umap1.find(5)); // Removes the element with key 5 using iterator

    std::cout << "Unordered map after removing elements: ";
    for (const auto& [key, value] : umap1) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[04] Accessing Elements
    std::cout << "Element with key 6: " << umap1[6] << std::endl; // Accessing using []
    std::cout << "Element with key 7: " << umap1.at(7) << std::endl; // Accessing using at()

    // Accessing with an iterator
    auto it = umap1.find(6);
    if (it != umap1.end()) {
        std::cout << "Element found with key 6: " << it->second << std::endl;
    } else {
        std::cout << "Key 6 not found." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[05] Finding Elements
    if (umap1.find(7) != umap1.end()) {
        std::cout << "Element with key 7 found: " << umap1[7] << std::endl;
    } else {
        std::cout << "Element with key 7 not found." << std::endl;
    }

    if (umap1.find(9) == umap1.end()) {
        std::cout << "Element with key 9 not found." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[06] Iterating Over an Unordered Map
    std::cout << "Iterating over umap1: ";
    for (const auto& [key, value] : umap1) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;

    // Using an iterator
    std::cout << "Using iterator to iterate over umap1: ";
    for (auto it = umap1.begin(); it != umap1.end(); ++it) {
        std::cout << "{" << it->first << ", " << it->second << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[07] Size and Capacity
    std::cout << "Size of umap1: " << umap1.size() << std::endl;
    std::cout << "Max size of umap1: " << umap1.max_size() << std::endl;
    std::cout << "Is umap1 empty: " << (umap1.empty() ? "Yes" : "No") << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[08] Checking for Existence
    if (umap1.count(6) > 0) {
        std::cout << "Key 6 exists in umap1." << std::endl;
    } else {
        std::cout << "Key 6 does not exist in umap1." << std::endl;
    }

    if (umap1.count(10) == 0) {
        std::cout << "Key 10 does not exist in umap1." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[09] Custom Hash Function and Equality Predicate
    struct CustomHash {
        size_t operator()(int key) const {
            return std::hash<int>()(key); // Default hash function
        }
    };

    struct CustomEqual {
        bool operator()(int a, int b) const {
            return a == b; // Default equality predicate
        }
    };

    std::unordered_map<int, std::string, CustomHash, CustomEqual> umap6 = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    std::cout << "Unordered map with custom hash and equality: ";
    for (const auto& [key, value] : umap6) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[10] Sorting by Value (using a std::vector)
    std::vector<std::pair<int, std::string>> vec(umap1.begin(), umap1.end());
    std::sort(vec.begin(), vec.end(), [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
        return a.second < b.second; // Sort by value
    });

    std::cout << "Unordered map sorted by value: ";
    for (const auto& [key, value] : vec) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    return 0;
}
