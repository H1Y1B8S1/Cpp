#include <iostream>

int main()
{
    const char *ptrChar{"Hello world"};
    auto *temp = ptrChar;
    std::cout << ptrChar << "\n";

    while (*ptrChar != '\0')
    {
        std::cout << *ptrChar << "\n";
        ptrChar++;
    }

    ptrChar = temp;
    std::cout << ptrChar << "\n";

    return 0;
}