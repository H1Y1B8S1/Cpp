#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Select data type (1 for int, 2 for double, 3 for string): ";
    int choice;
    std::cin >> choice;

    if (choice == 1)
    {
        std::vector<int> numbers = {10, 20, 30, 40, 50};
        numbers.push_back(60);
        numbers.emplace_back(70);

        std::cout << "First element: " << numbers[0] << std::endl;
        std::cout << "Last element: " << numbers.back() << std::endl;

        numbers.pop_back();
        numbers.erase(numbers.begin() + 2);

        // Inserting an element at a specific position
        numbers.insert(numbers.begin() + 1, 99);

        std::cout << "Vector elements: ";
        for (int num : numbers)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        // Accessing elements using at() function
        std::cout << "Element at index 2: " << numbers.at(2) << std::endl;

        std::cout << "Size: " << numbers.size() << std::endl;
        std::cout << "Capacity: " << numbers.capacity() << std::endl;
    }
    else if (choice == 2)
    {
        std::vector<double> doubles = {3.14, 2.71, 1.618};
        doubles.push_back(0.123);
        doubles.emplace_back(5.678);

        std::cout << "First element: " << doubles[0] << std::endl;
        std::cout << "Last element: " << doubles.back() << std::endl;

        doubles.pop_back();
        doubles.erase(doubles.begin() + 1);

        // Inserting an element at a specific position
        doubles.insert(doubles.begin() + 1, 9.99);

        std::cout << "Vector elements: ";
        for (double num : doubles)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        // Accessing elements using at() function
        std::cout << "Element at index 2: " << doubles.at(2) << std::endl;

        std::cout << "Size: " << doubles.size() << std::endl;
        std::cout << "Capacity: " << doubles.capacity() << std::endl;
    }
    else if (choice == 3)
    {
        std::vector<std::string> strings = {"apple", "banana", "orange"};
        strings.push_back("grape");
        strings.emplace_back("kiwi");

        std::cout << "First element: " << strings[0] << std::endl;
        std::cout << "Last element: " << strings.back() << std::endl;

        strings.pop_back();
        strings.erase(strings.begin() + 1);

        // Inserting an element at a specific position
        strings.insert(strings.begin() + 1, "melon");

        std::cout << "Vector elements: ";
        for (std::string str : strings)
        {
            std::cout << str << " ";
        }
        std::cout << std::endl;

        // Accessing elements using at() function
        std::cout << "Element at index 2: " << strings.at(2) << std::endl;

        std::cout << "Size: " << strings.size() << std::endl;
        std::cout << "Capacity: " << strings.capacity() << std::endl;
    }
    else
    {
        std::cout << "Invalid choice!" << std::endl;
        return 1;
    }

    return 0;
}
