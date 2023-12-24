#include <iostream>
using namespace std;

void PointeR(); // We have to declare just a fun without a body, above main to use the fun inside the main,
                // Because function is defined after main so need a referance.
                // Or we could use Main at the end of all functions. so no need any declaraions.
void Boolens();

int main(int argc, char const *argv[])
{
    PointeR();
    Boolens();
    return 0;
}

void PointeR()
{
    int *ptr;                   // pointer declaration
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
