#include <iostream>
#include <array>
#include <algorithm> // sort, find, max_element, min_element, reverse, fill
#include <numeric>   // accumulate

/*
(1) Array Initialization
(2) Accessing elements
(3) Modifying elements
(4) Iterating over elements
(5) Sorting
(6) Searching
(7) Max & Min element
(8) Filling
(9) Size & Capacity
(10) Summing elements
(11) Reversing elements
*/

int main(void)
{
    // #[01] Array Initialization
    std::array<int, 5> arr = {10, 20, 30, 40, 50}; // Initialization with a list of values
    std::array<int, 5> arr2 = {1}; // Initializes the first element to 1, others to 0
    std::array<int, 5> arr3 = {10}; // Initializes the first element to 10, others to 0
    std::array<int, 5> arr4; // Uninitialized array (contains garbage values)
    arr4.fill(0); // Fills the entire array with 0

    std::cout << "Array 1: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[02] Accessing elements
    std::cout << "First element: " << arr[0] << std::endl;   // Accessing the first element
    std::cout << "Last element: " << arr[arr.size() - 1] << std::endl; // Accessing the last element
    std::cout << "Element at index 2: " << arr.at(2) << std::endl; // Accessing with bounds checking
    std::cout << "First element (front): " << arr.front() << std::endl; // Accessing the first element using front()
    std::cout << "Last element (back): " << arr.back() << std::endl; // Accessing the last element using back()
    /*_______________________________________________________________________________________________________*/

    // #[03] Modifying elements
    arr[1] = 100; // Modifying the element at index 1
    std::cout << "Array after modifying: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[04] Iterating over elements
    std::cout << "Iterating with for loop: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Iterating with range-based for loop: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "Iterating with iterator: ";
    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[05] Sorting
    std::sort(arr.begin(), arr.end()); // Sorting in ascending order
    std::cout << "Array after sort: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
    
    std::sort(arr.begin(), arr.end(), std::greater<int>()); // Sorting in descending order
    std::cout << "Array after sort in descending: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[06] Searching
    auto it = std::find(arr.begin(), arr.end(), 30); // Find the first occurrence of 30
    if (it != arr.end())
        std::cout << "Found 30 at position: " << std::distance(arr.begin(), it) << std::endl;
    else
        std::cout << "30 not found in the array." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[07] Max & Min element
    auto maxIt = std::max_element(arr.begin(), arr.end()); // Find the max element
    auto minIt = std::min_element(arr.begin(), arr.end()); // Find the min element
    std::cout << "Max element: " << *maxIt << std::endl;
    std::cout << "Min element: " << *minIt << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[08] Filling the array
    arr.fill(42); // Fills the entire array with 42
    std::cout << "Array after fill: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[09] Size & Capacity
    std::cout << "Array size: " << arr.size() << std::endl; // Get the size of the array
    std::cout << "Array max size: " << arr.max_size() << std::endl; // Get the maximum size the array can have
    std::cout << "Is array empty: " << (arr.empty() ? "Yes" : "No") << std::endl; // Check if the array is empty
    /*_______________________________________________________________________________________________________*/

    // #[10] Summing elements
    int sum = std::accumulate(arr.begin(), arr.end(), 0); // Sum all elements in the array
    std::cout << "Sum of elements: " << sum << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[11] Reversing elements
    std::reverse(arr.begin(), arr.end()); // Reverses the array
    std::cout << "Array after reverse: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    return 0;
}
