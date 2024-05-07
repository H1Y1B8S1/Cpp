#include <iostream>
#include <vector>
#include <string>
#include <variant>
#include <algorithm>

using DataType = std::variant<int, double, std::string>;

void print(const int& val) {
    std::cout << val << " ";
}

void print(const double& val) {
    std::cout << val << " ";
}

void print(const std::string& val) {
    std::cout << val << " ";
}

template<typename T>
void vectorOperations(std::vector<T>& vec) {
    vec.erase(vec.begin() + 2);
    vec.insert(vec.begin() + 1, T(99));
    std::sort(vec.begin(), vec.end());

    for (const auto& elem : vec) {
        std::visit([](const auto& e){ print(e); }, elem);
    }
    std::cout << "\nElement at index 2: ";
    std::visit([](const auto& e){ print(e); }, vec.at(2));
    std::cout << "\nSize: " << vec.size() << "\nCapacity: " << vec.capacity() << std::endl;
}

int main() {
    std::cout << "Select data type (1 for int, 2 for double, 3 for string): ";
    int choice;
    std::cin >> choice;

    std::vector<DataType> data;

    switch (choice) {
        case 1:
            data = {10, 20, 30, 40, 50};
            break;
        case 2:
            data = {3.14, 2.71, 1.618, 0.123, 5.678};
            break;
        case 3:
            data = {"apple", "banana", "orange", "grape", "kiwi"};
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            return 1;
    }

    vectorOperations(data);

    return 0;
}
