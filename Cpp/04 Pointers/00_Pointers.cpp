#include <iostream>
#include <memory> // for smart pointers
#include <vector> // for examples

/*
This file covers all major functionalities of pointers in C++:
1. Basic pointer usage
2. Pointer arithmetic
3. Pointers and arrays
4. Pointers and functions
5. Dynamic memory allocation (new/delete)
6. Function pointers
7. Pointers to pointers
8. Smart pointers (unique_ptr, shared_ptr, weak_ptr)
9. Pointer safety and common pitfalls
10. Advanced topics (e.g., pointer aliasing, const pointers, etc.)
*/

// Function to demonstrate function pointers
void printHello() {
    std::cout << "Hello, World!" << std::endl;
}

int add(int a, int b) {
    return a + b;
}

int main(void)
{
    // #[01] Basic pointer usage
    int x = 10;
    int* ptr = &x; // Pointer to x
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Dereferenced ptr: " << *ptr << std::endl;

    // #[02] Pointer arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int* arrPtr = arr; // Pointer to the first element of the array
    std::cout << "First element: " << *arrPtr << std::endl;
    arrPtr++; // Move to the next element
    std::cout << "Second element: " << *arrPtr << std::endl;
    arrPtr += 2; // Move two elements ahead
    std::cout << "Fourth element: " << *arrPtr << std::endl;

    // #[03] Pointers and arrays
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << *(arr + i) << std::endl;
    }

    // #[04] Pointers and functions
    void (*funcPtr)() = printHello; // Function pointer
    funcPtr(); // Call function via pointer

    int (*addPtr)(int, int) = add; // Function pointer with parameters
    std::cout << "Sum: " << addPtr(5, 10) << std::endl;

    // #[05] Dynamic memory allocation (new/delete)
    int* dynamicPtr = new int(100); // Allocate memory for a single integer
    std::cout << "Dynamic value: " << *dynamicPtr << std::endl;
    delete dynamicPtr; // Free memory

    int* dynamicArray = new int[5]{1, 2, 3, 4, 5}; // Allocate memory for an array
    for (int i = 0; i < 5; i++) {
        std::cout << "Dynamic array element " << i << ": " << dynamicArray[i] << std::endl;
    }
    delete[] dynamicArray; // Free memory

    // #[06] Function pointers
    using FunctionPtr = void(*)(); // Alias for function pointer type
    FunctionPtr funcPtr2 = printHello;
    funcPtr2();

    // #[07] Pointers to pointers
    int y = 20;
    int* ptr1 = &y;
    int** ptr2 = &ptr1; // Pointer to a pointer
    std::cout << "Value of y: " << y << std::endl;
    std::cout << "Value of ptr1: " << *ptr1 << std::endl;
    std::cout << "Value of ptr2: " << **ptr2 << std::endl;

    // #[08] Smart pointers
    // Unique pointer (owns the memory exclusively)
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(50);
    std::cout << "Unique pointer value: " << *uniquePtr << std::endl;

    // Shared pointer (shared ownership)
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(100);
    std::shared_ptr<int> sharedPtr2 = sharedPtr1; // Copy shared pointer
    std::cout << "Shared pointer value: " << *sharedPtr1 << std::endl;
    std::cout << "Shared pointer use count: " << sharedPtr1.use_count() << std::endl;

    // Weak pointer (does not increase reference count)
    std::weak_ptr<int> weakPtr = sharedPtr1;
    if (auto temp = weakPtr.lock()) { // Convert to shared_ptr to access the value
        std::cout << "Weak pointer value: " << *temp << std::endl;
    }

    // #[09] Pointer safety and common pitfalls
    // Dangling pointer example
    int* danglingPtr;
    {
        int z = 30;
        danglingPtr = &z;
    } // z goes out of scope, danglingPtr is now dangling
    // Uncommenting the following line will cause undefined behavior:
    // std::cout << "Dangling pointer value: " << *danglingPtr << std::endl;

    // Null pointer example
    int* nullPtr = nullptr;
    if (nullPtr == nullptr) {
        std::cout << "Pointer is null" << std::endl;
    }

    // #[10] Advanced topics
    // Const pointers
    const int* constPtr = &x; // Pointer to a constant integer
    // *constPtr = 20; // Error: cannot modify the value
    std::cout << "Const pointer value: " << *constPtr << std::endl;

    int* const ptrConst = &x; // Constant pointer to an integer
    *ptrConst = 20; // Valid: can modify the value
    // ptrConst = &y; // Error: cannot change the pointer

    // Pointer aliasing
    int* aliasPtr = ptr; // Alias for ptr
    std::cout << "Alias pointer value: " << *aliasPtr << std::endl;

    return 0;
}