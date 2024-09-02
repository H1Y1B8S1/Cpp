#include <iostream>
#include <set>
#include <unordered_set>
#include <string>
#include <algorithm> // For std::sort

/*
(1) Ordered Set (std::set) Initialization
(2) Adding/Updating Elements in std::set
(3) Removing Elements from std::set
(4) Accessing Elements in std::set
(5) Finding Elements in std::set
(6) Iterating Over std::set
(7) Size and Capacity of std::set
(8) Checking for Existence in std::set
(9) Custom Comparison Function in std::set

(10) Unordered Set (std::unordered_set) Initialization
(11) Adding/Updating Elements in std::unordered_set
(12) Removing Elements from std::unordered_set
(13) Accessing Elements in std::unordered_set
(14) Finding Elements in std::unordered_set
(15) Iterating Over std::unordered_set
(16) Size and Capacity of std::unordered_set
(17) Checking for Existence in std::unordered_set
(18) Custom Hash Function and Equality Predicate in std::unordered_set
*/

int main()
{
    // #[01] Ordered Set (std::set) Initialization
    std::set<int> set1; // Default constructor
    std::set<int> set2 = {11, 3, 15, 7, 9}; // Initializer list
    std::set<int> set3(set2); // Copy constructor
    std::set<int> set4(set2.begin(), set2.end()); // Range constructor

    std::cout << "Initialized set2: ";
    for (int num : set2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding/Updating Elements in std::set
    set1.insert(2); // Adds element 2
    set1.insert(4); // Adds element 4
    set1.insert(2); // No effect, 2 is already present

    std::cout << "Ordered set after adding/updating elements: ";
    for (int num : set1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[03] Removing Elements from std::set
    set1.erase(2); // Removes element 2
    set1.erase(set1.begin()); // Removes the first element

    std::cout << "Ordered set after removing elements: ";
    for (int num : set1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[04] Accessing Elements in std::set
    // std::set does not provide direct access by index
    // Elements can be accessed via iteration or by finding elements

    // Accessing with iterator
    std::cout << "First element using iterator: " << *set1.begin() << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[05] Finding Elements in std::set
    auto it = set1.find(4);
    if (it != set1.end()) {
        std::cout << "Element 4 found in set1." << std::endl;
    } else {
        std::cout << "Element 4 not found in set1." << std::endl;
    }

    auto it2 = set1.find(10);
    if (it2 == set1.end()) {
        std::cout << "Element 10 not found in set1." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[06] Iterating Over std::set
    std::cout << "Iterating over set1: ";
    for (int num : set1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Using an iterator
    std::cout << "Using iterator to iterate over set1: ";
    for (auto it = set1.begin(); it != set1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[07] Size and Capacity of std::set
    std::cout << "Size of set1: " << set1.size() << std::endl;
    std::cout << "Max size of set1: " << set1.max_size() << std::endl;
    std::cout << "Is set1 empty: " << (set1.empty() ? "Yes" : "No") << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[08] Checking for Existence in std::set
    if (set1.count(4) > 0) {
        std::cout << "Key 4 exists in set1." << std::endl;
    } else {
        std::cout << "Key 4 does not exist in set1." << std::endl;
    }

    if (set1.count(10) == 0) {
        std::cout << "Key 10 does not exist in set1." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[09] Custom Comparison Function in std::set
    struct Compare {
        bool operator()(int a, int b) const {
            return a > b; // Custom comparator for descending order
        }
    };

    std::set<int, Compare> set5 = {5, 2, 8, 1, 3};
    std::cout << "Ordered set with custom comparison: ";
    for (int num : set5) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[10] Unordered Set (std::unordered_set) Initialization
    std::unordered_set<int> uset1; // Default constructor
    std::unordered_set<int> uset2 = {1, 3, 5, 7, 9}; // Initializer list
    std::unordered_set<int> uset3(uset2); // Copy constructor
    std::unordered_set<int> uset4(uset2.begin(), uset2.end()); // Range constructor

    std::cout << "Initialized unordered set: ";
    for (int num : uset2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[11] Adding/Updating Elements in std::unordered_set
    uset1.insert(2); // Adds element 2
    uset1.insert(4); // Adds element 4
    uset1.insert(2); // No effect, 2 is already present

    std::cout << "Unordered set after adding/updating elements: ";
    for (int num : uset1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[12] Removing Elements from std::unordered_set
    uset1.erase(2); // Removes element 2
    uset1.erase(uset1.begin()); // Removes an element using iterator

    std::cout << "Unordered set after removing elements: ";
    for (int num : uset1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[13] Accessing Elements in std::unordered_set
    // std::unordered_set does not provide direct access by index
    // Elements can be accessed via iteration or by finding elements

    // Accessing with iterator
    std::cout << "First element using iterator: " << *uset1.begin() << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[14] Finding Elements in std::unordered_set
    auto it3 = uset1.find(4);
    if (it3 != uset1.end()) {
        std::cout << "Element 4 found in uset1." << std::endl;
    } else {
        std::cout << "Element 4 not found in uset1." << std::endl;
    }

    auto it4 = uset1.find(10);
    if (it4 == uset1.end()) {
        std::cout << "Element 10 not found in uset1." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[15] Iterating Over std::unordered_set
    std::cout << "Iterating over uset1: ";
    for (int num : uset1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Using an iterator
    std::cout << "Using iterator to iterate over uset1: ";
    for (auto it = uset1.begin(); it != uset1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[16] Size and Capacity of std::unordered_set
    std::cout << "Size of uset1: " << uset1.size() << std::endl;
    std::cout << "Max size of uset1: " << uset1.max_size() << std::endl;
    std::cout << "Is uset1 empty: " << (uset1.empty() ? "Yes" : "No") << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[17] Checking for Existence in std::unordered_set
    if (uset1.count(4) > 0) {
        std::cout << "Key 4 exists in uset1." << std::endl;
    } else {
        std::cout << "Key 4 does not exist in uset1." << std::endl;
    }

    if (uset1.count(10) == 0) {
        std::cout << "Key 10 does not exist in uset1." << std::endl;
    }
    /*_______________________________________________________________________________________________________*/

    // #[18] Custom Hash Function and Equality Predicate in std::unordered_set
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

    std::unordered_set<int, CustomHash, CustomEqual> uset5 = {1, 2, 3, 4, 5};
    std::cout << "Unordered set with custom hash and equality: ";
    for (int num : uset5) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
