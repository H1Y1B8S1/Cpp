#include <iostream>
#include <string>
#include <algorithm> // Include this header for std::reverse

int main()
{
    // Initialize a string
    std::string originalString = "Hello, World!";
    std::cout << "Original String: " << originalString << std::endl;
    std::cout << "\n";

    auto ptr = originalString.begin();

    while (ptr != originalString.end())
    {
        std::cout << *ptr++ << " ";
    }
    std::cout << "\n\n";

    // Get the length of the string
    int len = originalString.length();
    std::cout << "Length of the string: " << len << std::endl;
    std::cout << "\n";

    // Append another string
    std::string appendString = " How are you?";
    originalString.append(appendString);
    std::cout << "Appended String: " << originalString << std::endl;
    std::cout << "\n";

    // Extract a substring
    std::string subString = originalString.substr(7, 5);
    std::cout << "Substring: " << subString << std::endl;
    std::cout << "\n";

    // Find the position of a substring
    size_t found = originalString.find("are");
    if (found != std::string::npos)
    {
        std::cout << "Substring 'are' found at position: " << found << std::endl;
    }
    else
    {
        std::cout << "Substring not found" << std::endl;
    }
    std::cout << "\n";

    // Replace a portion of the string
    originalString.replace(7, 5, "Universe");
    std::cout << "Modified String: " << originalString << std::endl;
    std::cout << "\n";

    // Convert the string to uppercase
    for (char &c : originalString)
    {
        c = toupper(c);
    }
    std::cout << "Uppercase String: " << originalString << std::endl;
    std::cout << "\n";

    // Convert the string to lowercase
    for (char &c : originalString)
    {
        c = tolower(c);
    }
    std::cout << "Lowercase String: " << originalString << std::endl;
    std::cout << "\n";

    // Erase a portion of the string
    originalString.erase(7, 8);
    std::cout << "Erased String: " << originalString << std::endl;
    std::cout << "\n";

    // Reverse the string
    std::reverse(originalString.begin(), originalString.end());
    std::cout << "Reversed String: " << originalString << std::endl;
    std::cout << "\n";

    return 0;
}
