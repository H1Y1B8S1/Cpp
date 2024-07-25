// find the size of an array
#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout<<"the total number of bytes occupied by the array: "<< sizeof(arr)<<" Bytes\n";
    std::cout<<"the number of bytes occupied by the first element of the array: "<< sizeof(arr[0])<<" Bytes\n";
    std::cout << "The size of the array is: " << size << " elements" << std::endl;

    return 0;
}
