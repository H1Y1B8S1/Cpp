#include <iostream>

bool TrueFlase(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}

int main()
{

    int inPut = 0;
    std::cout << "Enter the num: ";
    std::cin >> inPut;
    bool flag = TrueFlase(inPut);

    std::cout<<std::boolalpha; // This line make output look like true/false instead 1 and 0 for bool.

    std::cout << flag;
    return 0;
}