#include <iostream>
#include <cstring>  // For C-style string functions like strlen, strcpy, strcat, strcmp
#include <string>   // For std::string
#include <algorithm> // For sorting, reversing, etc.

/*
(1) Character Array Initialization
(2) Accessing Characters
(3) Modifying Characters
(4) String Concatenation
(5) String Copying
(6) String Length
(7) String Comparison
(8) Finding Characters
(9) Reversing a String
(10) Sorting Characters
(11) String to C-string Conversion and Vice Versa
*/

int main(void)
{
    // #[01] Character Array Initialization
    char cstr1[] = "Hello"; // Initialization with a string literal
    char cstr2[10] = "World"; // Specify size explicitly
    char cstr3[10] = {'H', 'i', '\0'}; // Initialization with character list
    char cstr4[10]; // Uninitialized character array (contains garbage values)

    std::string str1 = "Hello"; // Using std::string
    std::string str2("World");  // Another way to initialize std::string
    std::string str3(5, 'A');   // Initialize with 5 'A's

    std::cout << "C-string 1: " << cstr1 << std::endl;
    std::cout << "std::string 1: " << str1 << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[02] Accessing Characters
    std::cout << "First character of cstr1: " << cstr1[0] << std::endl;
    std::cout << "First character of str1: " << str1[0] << std::endl;
    std::cout << "Last character of cstr1: " << cstr1[strlen(cstr1) - 1] << std::endl;
    std::cout << "Last character of str1: " << str1.back() << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[03] Modifying Characters
    cstr1[0] = 'h';
    str1[0] = 'h';
    std::cout << "Modified cstr1: " << cstr1 << std::endl;
    std::cout << "Modified str1: " << str1 << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[04] String Concatenation
    strcat(cstr1, " World!"); // Concatenate to C-string
    str1 += " World!";        // Concatenate to std::string
    std::cout << "Concatenated cstr1: " << cstr1 << std::endl;
    std::cout << "Concatenated str1: " << str1 << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[05] String Copying
    strcpy(cstr2, cstr1);   // Copy C-string
    str2 = str1;            // Copy std::string
    std::cout << "Copied cstr2: " << cstr2 << std::endl;
    std::cout << "Copied str2: " << str2 << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[06] String Length
    std::cout << "Length of cstr1: " << strlen(cstr1) << std::endl; // Length of C-string
    std::cout << "Length of str1: " << str1.length() << std::endl;  // Length of std::string
    /*_______________________________________________________________________________________________________*/

    // #[07] String Comparison
    if (strcmp(cstr1, cstr2) == 0)
        std::cout << "cstr1 and cstr2 are equal." << std::endl;
    else
        std::cout << "cstr1 and cstr2 are not equal." << std::endl;

    if (str1 == str2)
        std::cout << "str1 and str2 are equal." << std::endl;
    else
        std::cout << "str1 and str2 are not equal." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[08] Finding Characters
    char *p = strchr(cstr1, 'W'); // Find first occurrence of 'W' in C-string
    if (p)
        std::cout << "'W' found in cstr1 at position: " << p - cstr1 << std::endl;
    else
        std::cout << "'W' not found in cstr1." << std::endl;

    size_t pos = str1.find('W'); // Find first occurrence of 'W' in std::string
    if (pos != std::string::npos)
        std::cout << "'W' found in str1 at position: " << pos << std::endl;
    else
        std::cout << "'W' not found in str1." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[09] Reversing a String
    std::reverse(cstr1, cstr1 + strlen(cstr1)); // Reverse C-string
    std::reverse(str1.begin(), str1.end());     // Reverse std::string
    std::cout << "Reversed cstr1: " << cstr1 << std::endl;
    std::cout << "Reversed str1: " << str1 << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[10] Sorting Characters
    std::sort(cstr1, cstr1 + strlen(cstr1)); // Sort C-string
    std::sort(str1.begin(), str1.end());     // Sort std::string
    std::cout << "Sorted cstr1: " << cstr1 << std::endl;
    std::cout << "Sorted str1: " << str1 << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[11] String to C-string Conversion and Vice Versa
    const char *cstrFromStr = str2.c_str(); // Convert std::string to C-string
    std::string strFromCstr(cstr1);         // Convert C-string to std::string
    std::cout << "Converted cstr from str2: " << cstrFromStr << std::endl;
    std::cout << "Converted str from cstr1: " << strFromCstr << std::endl;
    /*_______________________________________________________________________________________________________*/

    return 0;
}
