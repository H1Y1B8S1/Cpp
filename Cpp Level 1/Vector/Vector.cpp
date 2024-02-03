#include <iostream>
#include <vector>
#include <string>

int main()
{

    std::vector<int> numbers = {10, 20, 30, 40, 50,};

    // Adding elements to the end of the vector
    numbers.push_back(60);
    numbers.emplace_back(70);

    // Accessing first and last elements
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    // Removing elements from the end and a specific position
    numbers.pop_back();
    numbers.erase(numbers.begin() + 2);

    // Inserting an element at a specific position
    numbers.insert(numbers.begin() + 1, 99); // numbers.begin() return a pointer starting with
                                             //  the first element
    auto ptr = numbers.begin();
    std::cout << "First element: " << *ptr << "\n";

    for (auto it = numbers.begin(); it != numbers.end();)
    {
        std::cout << *it++ << " ";
    }
    std::cout << "\n";

    // Displaying vector elements
    std::cout << "Vector elements: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Accessing an element using at() function
    std::cout << "Element at index 2: " << numbers.at(2) << std::endl;

    // Displaying size and capacity of the vector
    std::cout << "Size: " << numbers.size() << std::endl;
    std::cout << "Capacity: " << numbers.capacity() << std::endl;

    std::vector<int> myVector(26, 0);

    // Display the initialized vector
    std::cout << "Initialized Vector: ";
    for (int value : myVector)
    {
        std::cout << value << " ";
    }

    //=--------------------------------------------------------------------------------------
    // finding and checking value in vector.
    // if (std::find(mappedCharacters.begin(), mappedCharacters.end(), t[i]) == mappedCharacters.end())
    // {
    //     // t[i] is not used for mapping, so we can map s[i] to t[i]
    //     mappedCharacters.push_back(t[i]);
    //     mapping[s[i]] = t[i];
    // }

    return 0;
}
