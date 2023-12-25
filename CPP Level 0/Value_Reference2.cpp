#include <iostream>
using namespace std;

void CallbyValue(int data)
{
    cout << "data1 = " << data << endl;
    data = 5;
    cout << "data2 = " << data << endl;
}

void CallbyReference(int *data)
{
    cout << "data3 = " << *data << endl;
    *data = 5;
    cout << "data4 = " << *data << endl;
}

void SwapValues(int *x, int *y)
{
    int swap = *x;
    *x = *y;
    *y = swap;
}

int main(int argc, char const *argv[])
{

    int data = 3;
    cout << "data5 = " << data << endl;

    // Call by Value Function
    CallbyValue(data);
    cout << "data6 = " << data << endl; // no value has been changed by the function.

    // Call by Reference Function
    CallbyReference(&data);
    cout << "data7 = " << data << endl; // value has been changed by the function.

    // Swap values
    int A = 10, B = 100;
    SwapValues(&A, &B);
    cout << "A: " << A << " B: " << B << endl;

    return 0;
}
