#include <iostream>
using namespace std;

int main()
{
    int factorial();

    factorial();
    factorial();
    factorial();
}

int factorial()
{
    static int i = 0;
    int j = 0;
    i++, j++;

    cout << i << " " << j << endl;
}