#include <iostream>
#include <string>
#include <algorithm> // sort, reverse, find, max_element, min_element
#include <cctype>    // isupper, islower, tolower, toupper

/*
(1) String Initialization
(2) Adding characters
(3) Removing characters
(4) Accessing characters
(5) Max & Min character
(6) Specific character
(7) Specific character with condition
(8) Sorting
(9) Size & Capacity
(10) Substrings
(11) Comparison
(12) String Search
(13) Case Conversion
*/

int main(void)
{
    // #[01] String Initialization
    std::string str1 = "Hello";                 // Initialization with a string literal
    std::string str2(str1);                     // Copy constructor
    std::string str3(str1.begin(), str1.end()); // Range constructor
    std::string str4;                           // Default constructor
    str4 = str1;
    std::string str5(5, 'A');                   // A string of size 5, all characters are 'A'
    std::string str6(std::move(str4));          // Move constructor
    std::string str7 = R"(Raw string literal)"; // Raw string literal (ignores escape sequences)
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding characters
    str1.push_back(' ');                               // Adds a character to the end of the string
    str1 += "World!";                                  // Appends another string
    str1.insert(str1.begin(), 'H');                    // Inserts a character at the beginning
    str1.insert(2, "ello");                            // Inserts a string at a specified position
    str1.append(" C++");                               // Appends a string to the end
    str2.insert(str2.end(), str1.begin(), str1.end()); // Inserts a range of characters at the end of the string
    str2 += '!';
    /*_______________________________________________________________________________________________________*/

    // #[3] Removing characters
    str1.pop_back();          // Removes the last character
    str1.erase(str1.begin()); // Removes the first character
    str1.erase(2, 3);         // Removes characters starting at position 2 and spanning 3 characters
    str3.clear();             // Removes all characters from the string
    str3.resize(5, 'Z');      // Resizes the string to contain 5 characters ('Z' padding if necessary)

    std::cout << "str1: " << str1 << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[4] Accessing characters
    std::cout << "First character: " << str1[0] << std::endl;
    std::cout << "Last character: " << str1.back() << std::endl;
    std::cout << "First character (front): " << str1.front() << std::endl; // Accessing the first character using front()
    std::cout << "Character at index 2: " << str1.at(2) << std::endl;      // Accessing character at a specific index with bounds checking

    std::string::iterator it = str1.begin(); // Using iterators to access characters
    std::cout << "First character using iterator: " << *it << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[5] Max & Min character
    auto it2 = std::max_element(str1.begin(), str1.end()); // Find max character
    char largestChar = *it2;
    std::cout << "Largest Character: " << largestChar << std::endl;

    auto it3 = std::min_element(str1.begin(), str1.end()); // Find min character
    char smallestChar = *it3;
    std::cout << "Smallest Character: " << smallestChar << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[6] Specific character (e.g., 'W')
    auto it4 = std::find(str1.begin(), str1.end(), 'W');
    if (it4 != str1.end())
        std::cout << "Found 'W' at position: " << std::distance(str1.begin(), it4) << std::endl;
    else
        std::cout << "'W' not found in the string." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[7] Find the first occurrence of a specific character with a condition
    auto it5 = std::find_if(str1.begin(), str1.end(), [](char ch)
                            { return std::isupper(ch); });
    if (it5 != str1.end())
        std::cout << "First uppercase character is at position: " << std::distance(str1.begin(), it5) << std::endl;
    else
        std::cout << "No uppercase character found." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[8] Sorting
    std::reverse(str1.begin(), str1.end());                        // Reverses the string
    std::sort(str1.begin(), str1.end());                           // Sorts the string in ascending order
    std::partial_sort(str1.begin(), str1.begin() + 3, str1.end()); // Partially sorts the first 3 characters
    std::stable_sort(str1.begin(), str1.end());                    // Stable sort in ascending order
    std::sort(str1.begin(), str1.end(), std::greater<char>());     // Sorts the string in descending order
    std::sort(str1.begin(), str1.end(), [](char a, char b)
              { return std::tolower(a) < std::tolower(b); }); // Sorts based on lowercase comparison
    /*_______________________________________________________________________________________________________*/

    // #[9] Size and Capacity
    std::cout << "Size: " << str1.size() << std::endl;
    std::cout << "Capacity: " << str1.capacity() << std::endl;
    str1.reserve(50);                                                        // Requests a change in the capacity of the string to at least 50
    std::cout << "Is empty: " << (str1.empty() ? "Yes" : "No") << std::endl; // Checks if the string is empty
    str1.shrink_to_fit();                                                    // Reduces the capacity of the string to fit its size
    str1.resize(10, '-');                                                    // Resizes the string to 10 characters, filling new characters with '-'
    /*_______________________________________________________________________________________________________*/

    // #[10] Substrings
    std::string substr = str1.substr(2, 4); // Get a substring starting from index 2 with length 4
    std::cout << "Substring: " << substr << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[11] Comparison
    std::string str8 = "Hello";
    if (str1 == str8) // Comparing two strings
        std::cout << "str1 is equal to str8" << std::endl;
    else
        std::cout << "str1 is not equal to str8" << std::endl;

    if (str1.compare(str8) == 0) // Compare using compare function
        std::cout << "str1 is equal to str8 (using compare)" << std::endl;
    else
        std::cout << "str1 is not equal to str8 (using compare)" << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[12] String Search
    std::string searchString = "World";
    size_t found = str1.find(searchString); // Finds the first occurrence of "World"
    if (found != std::string::npos)
        std::cout << "\"" << searchString << "\" found at position: " << found << std::endl;
    else
        std::cout << "\"" << searchString << "\" not found." << std::endl;

    found = str1.find_first_of("aeiou"); // Finds the first occurrence of any character in "aeiou"
    if (found != std::string::npos)
        std::cout << "First vowel found at position: " << found << std::endl;
    else
        std::cout << "No vowels found." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[13] Case Conversion
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper); // Convert to uppercase
    std::cout << "Uppercase: " << str1 << std::endl;

    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower); // Convert to lowercase
    std::cout << "Lowercase: " << str1 << std::endl;
    /*_______________________________________________________________________________________________________*/

    return 0;
}
