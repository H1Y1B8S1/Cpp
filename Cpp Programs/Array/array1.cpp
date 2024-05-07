#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> data;
    for (std::size_t i = 0; i < data.size(); i++)
    {
        data[i] = i;
    }

    std::cout << "\nElements: \n";
    for (int &data : data)
    {
        std::cout << " " << data << " ";
    }

    data.front() = 100;
    data.back() = 100;

    std::cout << "\nNew Elements: \n";
    for (int i : data)
    {
        std::cout << " " << i << " ";
    }
}