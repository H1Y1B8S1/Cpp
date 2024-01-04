#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <type_traits>

template <typename T>
void vectorOperations(const std::vector<T> &vec)
{
    std::vector<T> tempVec = vec;
    tempVec.erase(tempVec.begin() + 2);
    tempVec.insert(tempVec.begin() + 1, T(99));
    std::sort(tempVec.begin(), tempVec.end());

    for (const T &elem : tempVec)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Element at index 2: " << tempVec.at(2) << std::endl;
    std::cout << "Size: " << tempVec.size() << std::endl;
    std::cout << "Capacity: " << tempVec.capacity() << std::endl;
}

void vectorOperations(const std::vector<std::string> &vec)
{
    std::vector<std::string> tempVec = vec;
    tempVec.erase(tempVec.begin() + 2);
    tempVec.insert(tempVec.begin() + 1, "apple"); // Inserting a string instead of an integer
    std::sort(tempVec.begin(), tempVec.end());

    for (const std::string &elem : tempVec)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Element at index 2: " << tempVec.at(2) << std::endl;
    std::cout << "Size: " << tempVec.size() << std::endl;
    std::cout << "Capacity: " << tempVec.capacity() << std::endl;
}

int main()
{
    std::cout << "Select data type (1 for int, 2 for double, 3 for string): ";
    int choice;
    std::cin >> choice;

    if (choice == 1)
    {
        vectorOperations(std::vector<int>{10, 20, 30, 40, 50});
    }
    else if (choice == 2)
    {
        vectorOperations(std::vector<double>{3.14, 2.71, 1.618, 0.123, 5.678});
    }
    else if (choice == 3)
    {
        vectorOperations(std::vector<std::string>{"apple", "banana", "orange", "grape", "kiwi"});
    }
    else
    {
        std::cout << "Invalid choice!" << std::endl;
        return 1;
    }

    return 0;
}
