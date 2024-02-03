#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

int main()
{
    // Seed the random number generator using current time
    std::mt19937 gen(static_cast<unsigned>(time(0)));

    // Generate a random array of numbers
    const int arraySize = 10;
    std::vector<int> numbers(arraySize);
    std::uniform_int_distribution<> dis(1, 100); // Range from 1 to 100

    std::cout << "Randomly generated array:" << std::endl;
    for (int i = 0; i < arraySize; ++i)
    {
        numbers[i] = dis(gen);
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Sort the array using std::sort
    std::sort(numbers.begin(), numbers.end());

    // Display the sorted array
    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
