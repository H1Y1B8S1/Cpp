#include <iostream>
using namespace std;

int main()
{

    auto foo = [](int x)
    {
        std::cout << x << "\n";
    };

    foo(34);
    return 0;
}