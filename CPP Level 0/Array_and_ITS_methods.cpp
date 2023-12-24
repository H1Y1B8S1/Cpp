/*
● array in C++ is a group of similar types of elements that have contiguous memory location.
● In C++ std::array is a container that encapsulates fixed size arrays.

● Advantages of C++ Array
    Code Optimization (less code)
    Random Access
    Easy to traverse data
    Easy to manipulate data
    Easy to sort data etc.
● Disadvantages of C++ Array
    Fixed size
*/

#include <iostream>
using namespace std;

void SingleDimension()
{
    int arr[5] = {10, 0, 20, 0, 30};

    for (int i = 0; i < 5; i++) // For Loop
        cout << arr[i] << ",\t";
    cout << "\n\n";

    for (int i : arr) // Foreach Loop
    {
        cout << i << ",\t";
    }
    cout << "\n\n";
}

void MultiDimension()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n\n";
    }
}

int main()
{
    SingleDimension();
    MultiDimension();
}