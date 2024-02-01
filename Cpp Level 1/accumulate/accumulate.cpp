/*
std::accumulate is a function provided by the C++ Standard Template Library (STL)
that is part of the <numeric> header. It is designed for accumulating the values in a range,
typically a sequence in a container, by applying a specified binary operation.

                template< class InputIt, class T >
                T accumulate( InputIt first, InputIt last, T init );

        first: Iterator pointing to the beginning of the range.
        last: Iterator pointing to the end of the range.
        init: Initial value of the accumulator.
The function takes a range defined by two iterators (first and last) and an initial value (init).
It applies a binary operation (usually addition) between the elements in the range and the current
accumulator value. The result is an accumulated value.

*/

#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5}; // sum = 15
    int sum = std::accumulate(numbers.begin(), numbers.end(), /*inial value is 3*/ 3);
    std::cout << "Sum of elements: " << sum << std::endl; // sum it will return 15+3 = 18

    // Using std::accumulate with a lambda function to square each element and add them together
    int sumOfSquares = std::accumulate(numbers.begin(), numbers.end(), 0, [](int accumulator, int element)
                                       { return accumulator + element * element; });
                                       
    std::cout << "Sum of squares: " << sumOfSquares << std::endl;

    return 0;
}
