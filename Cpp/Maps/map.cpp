#include <iostream>
#include <map>
#include <string>
#include <algorithm> // For std::for_each

/*
(1) Map Initialization
(2) Adding/Updating Elements
(3) Removing Elements
(4) Accessing Elements
(5) Finding Elements
(6) Iterating Over a Map
(7) Size and Capacity
(8) Checking for Existence
(9) Custom Comparator for Map
(10) Sorting by Value (with a std::vector)
*/

int main()
{
    // #[01] Map Initialization
    std::map<int, std::string> map1; // Default constructor
    std::map<int, std::string> map2 = {{1, "One"}, {2, "Two"}, {3, "Three"}}; // Initializer list
    std::map<int, std::string> map3(map2); // Copy constructor
    std::map<int, std::string> map4(map2.begin(), map2.end()); // Range constructor

    std::cout << "Initialized map2: ";
    for (const auto& [key, value] : map2) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding/Updating Elements
    map1[4] = "Four"; // Adds a new element
    map1[5] = "Five"; // Adds another element
    map1[4] = "FOUR"; // Updates the value of key 4

    map1.insert({6, "Six"}); // Using insert to add an element
    map1.insert(std::make_pair(7, "Seven")); // Another way to insert

    map1.emplace(8, "Eight"); // Using emplace for in-place construction

    std::cout << "Map after adding/updating elements: ";
    for (const auto& [key, value] : map1) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[03] Removing Elements
    map1.erase(4); // Removes the element with key 4
    map1.erase(map1.begin()); // Removes the first element
    map1.erase(map1.find(5)); // Removes the element with key 5 using iterator

    std::cout << "Map after removing elements: ";
    for (const auto& [key, value] : map1) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[04] Accessing Elements
    std::cout << "Element with key 6: " << map1[6] << std::endl; // Accessing using []
    std::cout << "Element with key 7: " << map1.at(7) << std::endl; // Accessing using at()

    // Accessing with an iterator
    std::map<int, std::string>::iterator it = map1.find(6);
    if (it != map1.end()) {
        std::cout << "Element found with key 6: " << it->second << std::endl;
    } else {
        std::cout << "Key 6 not found." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[05] Finding Elements
    if (map1.find(7) != map1.end()) {
        std::cout << "Element with key 7 found: " << map1[7] << std::endl;
    } else {
        std::cout << "Element with key 7 not found." << std::endl;
    }

    if (map1.find(9) == map1.end()) {
        std::cout << "Element with key 9 not found." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[06] Iterating Over a Map
    std::cout << "Iterating over map1: ";
    for (const auto& [key, value] : map1) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;

    // Using an iterator
    std::cout << "Using iterator to iterate over map1: ";
    for (auto it = map1.begin(); it != map1.end(); ++it) {
        std::cout << "{" << it->first << ", " << it->second << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[07] Size and Capacity
    std::cout << "Size of map1: " << map1.size() << std::endl;
    std::cout << "Max size of map1: " << map1.max_size() << std::endl;
    std::cout << "Is map1 empty: " << (map1.empty() ? "Yes" : "No") << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[08] Checking for Existence
    if (map1.count(6) > 0) {
        std::cout << "Key 6 exists in map1." << std::endl;
    } else {
        std::cout << "Key 6 does not exist in map1." << std::endl;
    }

    if (map1.count(10) == 0) {
        std::cout << "Key 10 does not exist in map1." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[09] Custom Comparator for Map
    std::map<int, std::string, std::greater<int>> map5 = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    std::cout << "Map with custom comparator (greater): ";
    for (const auto& [key, value] : map5) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[10] Sorting by Value (using a std::vector)
    std::vector<std::pair<int, std::string>> vec(map1.begin(), map1.end());
    std::sort(vec.begin(), vec.end(), [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
        return a.second < b.second; // Sort by value
    });

    std::cout << "Map sorted by value: ";
    for (const auto& [key, value] : vec) {
        std::cout << "{" << key << ", " << value << "} ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    return 0;
}
