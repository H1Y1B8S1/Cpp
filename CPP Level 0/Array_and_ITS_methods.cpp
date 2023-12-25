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

void AraayOfPointers()
{

    int arr1[5];  // array of int
    int *arr2[5]; // array of pointers

    // Adding int values into the arr1 also adding address value of arr1 items into pointer arr2.
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter int value for arr[" << i << "] : ";
        cin >> arr1[i];

        arr2[i] = &arr1[i]; //adding address of each elements of arr1 to arr2.
    }

    // accessing the value of arr2 which the address of items in arr1
    cout << "Elements of arr2: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << ", ";
    }

    // accessing the value of arr1 with help of pointer arr2
    cout << "\nElements of arr1: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *arr2[i] << ", ";
    }
}

int main()
{
    // SingleDimension();
    // MultiDimension();
    AraayOfPointers();
}