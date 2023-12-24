/*
Advantage of pointer
    1) Pointer reduces the code and improves the performance, it is used to retrieving strings,
        trees etc. and used with arrays, structures and functions.
    2) We can return multiple values from function using pointer.
    3) It makes you able to access any memory location in the computer's memory.
Usage of pointer
There are many usage of pointers in C++ language.
    1) Dynamic memory allocation
    In c language, we can dynamically allocate memory using malloc() and calloc() functions where
        pointer is used.
    2) Arrays, Functions and Structures

Pointers in c language are widely used in arrays, functions and structures.
It reduces the code and improves the performance.
*/

#include <iostream>
using namespace std;

void PointeR(); // We have to declare just a fun without a body, above main to use the fun inside the main,
                // Because function is defined after main so need a referance.
                // Or we could use Main at the end of all functions. so no need any declaraions.
void Boolens();

void PointerExample()
{
    int number = 30;
    int *p;      // pointer initialization
    p = &number; // stores the address of number variable
    cout << "Address of number variable is:" << &number << endl;
    cout << "Address of p variable is:" << p << endl;
    cout << "Value of p variable is:" << *p << endl;
}

int main(int argc, char const *argv[])
{
    PointeR();
    Boolens();
    PointerExample();
    return 0;
}

void PointeR()
{
    int *ptr;                   // pointer declaration --> ptr can point to an address which holds int data
    int a[] = {10, 20, 30, 40}; // array initialization

    ptr = a; // assigning base address of array to the pointer ptr

    for (int i = 0; i < 4; i++)
    {
        cout << *ptr << endl;
        ptr++; // incrementing the value of pointer by 1
    }
}

void Boolens()
{

    int a = 45, b = 56;
    bool y = a > b, x = a < b;

    cout << "y value: " << y << " & x value: " << x << endl;
}
