#include <iostream>
#include <string>
#include <algorithm> // sort, find, reverse, transform, remove
#include <cctype>    // toupper, tolower
#include <numeric>   // for std::iota
#include <cassert>   // for assert

/*
This file covers all major functionalities of std::string in C++:
1. Initialization
2. Adding elements
3. Removing elements
4. Accessing elements
5. String length and capacity
6. Substring
7. Finding elements
8. String comparison
9. String concatenation
10. String conversion (to upper/lower case)
11. String reversal
12. String sorting
13. Removing whitespace
14. String replacement
15. String splitting (using delimiter)
16. String trimming (leading/trailing spaces)
17. String searching (find_first_of, find_last_of)
18. Numeric conversions (stoi, stod, to_string)
19. C-style string (c_str, data, copy)
20. Swap strings
21. Reserve and shrink
22. RFind (reverse find)
23. Assign new content
24. Resize string
25. Getline (read from input)
26. Advanced features (e.g., custom comparators, move semantics, etc.)
*/

int main(void)
{
    // #[01] String Initialization
    std::string str1 = "Hello, World!"; // Initializer list
    std::string str2(str1);             // Copy constructor
    std::string str3(str1.begin(), str1.end()); // Range constructor
    std::string str4;
    str4 = str1;                        // Copy assignment
    std::string str5(5, 'A');           // Fill constructor (5 elements with value 'A')
    std::string str6(std::move(str4));  // Move constructor

    // #[02] Adding elements
    str1.push_back('!');                // Add character to the end
    str1.append(" How are you?");       // Append a string
    str1.insert(5, " there");           // Insert at a specific position
    str1.insert(str1.begin() + 7, 'X'); // Insert a character at a specific position
    str1.insert(str1.end(), {' ', 'G', 'o', 'o', 'd', '!'}); // Insert multiple characters

    // #[03] Removing elements
    str1.pop_back();                    // Remove last character
    str1.erase(str1.begin());           // Remove first character
    str1.erase(str1.begin() + 5);       // Remove character at index 5
    str1.erase(str1.begin() + 7, str1.begin() + 10); // Remove range of characters
    str3.clear();                       // Clear all characters
    str3.resize(5, 'Z');                // Resize to 5 characters (fill with 'Z')

    // #[04] Accessing elements
    std::cout << "First character: " << str1[0] << std::endl;          // Access via []
    std::cout << "Last character: " << str1.back() << std::endl;       // Access last character
    std::cout << "First character (front): " << str1.front() << std::endl; // Access first character
    std::cout << "Character at index 5: " << str1.at(5) << std::endl;  // Access with bounds checking

    // #[05] String length and capacity
    std::cout << "Length of string: " << str1.length() << std::endl;   // Number of characters
    std::cout << "Size of string: " << str1.size() << std::endl;       // Same as length
    std::cout << "Is string empty? " << (str1.empty() ? "Yes" : "No") << std::endl; // Check if empty
    str1.reserve(50);                                                  // Reserve space
    str1.shrink_to_fit();                                              // Reduce capacity to fit size

    // #[06] Substring
    std::string substr = str1.substr(7, 5);                            // Substring from index 7 (length 5)
    std::cout << "Substring from index 7 (length 5): " << substr << std::endl;

    // #[07] Finding elements
    size_t pos = str1.find("World");                                   // Find substring
    if (pos != std::string::npos)
        std::cout << "Found 'World' at position: " << pos << std::endl;

    // #[08] String comparison
    if (str1.compare(str2) == 0)                                       // Compare strings
        std::cout << "str1 and str2 are equal" << std::endl;
    else
        std::cout << "str1 and str2 are not equal" << std::endl;

    // #[09] String concatenation
    std::string str7 = str1 + " " + str2;                              // Concatenate strings
    std::cout << "Concatenated string: " << str7 << std::endl;

    // #[10] String conversion (to upper/lower case)
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper); // Convert to uppercase
    std::cout << "Uppercase string: " << str1 << std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower); // Convert to lowercase
    std::cout << "Lowercase string: " << str1 << std::endl;

    // #[11] String reversal
    std::reverse(str1.begin(), str1.end());                            // Reverse the string
    std::cout << "Reversed string: " << str1 << std::endl;

    // #[12] String sorting
    std::sort(str1.begin(), str1.end());                               // Sort characters
    std::cout << "Sorted string: " << str1 << std::endl;

    // #[13] Removing whitespace
    str1.erase(std::remove(str1.begin(), str1.end(), ' '), str1.end()); // Remove spaces
    std::cout << "String after removing spaces: " << str1 << std::endl;

    // #[14] String replacement
    str1.replace(5, 5, "*****");                                       // Replace substring
    std::cout << "String after replacement: " << str1 << std::endl;

    // #[15] String splitting (using delimiter)
    std::string str8 = "Apple,Orange,Banana,Mango";
    size_t start = 0;
    size_t end = str8.find(',');
    while (end != std::string::npos)
    {
        std::cout << "Split: " << str8.substr(start, end - start) << std::endl;
        start = end + 1;
        end = str8.find(',', start);
    }
    std::cout << "Split: " << str8.substr(start) << std::endl;

    // #[16] String trimming (leading/trailing spaces)
    std::string str9 = "   Trim me!   ";
    str9.erase(0, str9.find_first_not_of(' '));                        // Trim leading spaces
    str9.erase(str9.find_last_not_of(' ') + 1);                        // Trim trailing spaces
    std::cout << "Trimmed string: '" << str9 << "'" << std::endl;

    // #[17] String searching (find_first_of, find_last_of)
    size_t pos1 = str1.find_first_of("aeiou");                         // Find first vowel
    size_t pos2 = str1.find_last_of("aeiou");                          // Find last vowel
    std::cout << "First vowel at position: " << pos1 << std::endl;
    std::cout << "Last vowel at position: " << pos2 << std::endl;

    // #[18] Numeric conversions
    std::string numStr = "12345";
    int num = std::stoi(numStr);                                       // Convert to integer
    double dnum = std::stod("123.45");                                 // Convert to double
    std::cout << "Integer: " << num << ", Double: " << dnum << std::endl;
    std::string numStr2 = std::to_string(12345);                       // Convert number to string
    std::cout << "String from number: " << numStr2 << std::endl;

    // #[19] C-style string (c_str, data, copy)
    const char* cstr = str1.c_str();                                   // Get C-style string
    std::cout << "C-style string: " << cstr << std::endl;
    char buffer[20];
    str1.copy(buffer, 5, 0);                                           // Copy substring to buffer
    buffer[5] = '\0';
    std::cout << "Copied string: " << buffer << std::endl;

    // #[20] Swap strings
    std::string str10 = "Swap1";
    std::string str11 = "Swap2";
    str10.swap(str11);                                                 // Swap contents
    std::cout << "After swap: " << str10 << ", " << str11 << std::endl;

    // #[21] Reserve and shrink
    str1.reserve(100);                                                 // Reserve space
    std::cout << "Capacity after reserve: " << str1.capacity() << std::endl;
    str1.shrink_to_fit();                                              // Reduce capacity to fit size
    std::cout << "Capacity after shrink: " << str1.capacity() << std::endl;

    // #[22] RFind (reverse find)
    size_t rpos = str1.rfind("o");                                     // Find last occurrence
    if (rpos != std::string::npos)
        std::cout << "Last 'o' found at position: " << rpos << std::endl;

    // #[23] Assign new content
    str1.assign("New Content");                                        // Assign new content
    std::cout << "After assign: " << str1 << std::endl;

    // #[24] Resize string
    str1.resize(15, 'X');                                              // Resize and fill with 'X'
    std::cout << "After resize: " << str1 << std::endl;

    // #[25] Getline (read from input)
    std::string input;
    std::cout << "Enter a line: ";
    std::getline(std::cin, input);                                     // Read a line from input
    std::cout << "You entered: " << input << std::endl;

    // #[26] Advanced features
    // Custom comparison functions
    auto customCompare = [](char a, char b) { return a > b; };
    std::sort(str1.begin(), str1.end(), customCompare);

    // Move semantics
    std::string str12 = std::move(str1);                               // Move constructor
    std::cout << "Size after move: " << str1.size() << std::endl;      // Should be 0

    return 0;
}