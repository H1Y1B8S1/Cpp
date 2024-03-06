#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{

    // short seed;
    // /*    Declares a variable named seed of type short.
    // The short data type is used to store integer values,
    // typically in a smaller range compared to int.   */
    // seed = time(0);
    // /*
    // time(0) is a function that comes from the <ctime> header in C++.
    // It returns the current time in seconds since the epoch (January 1, 1970).
    // This value is assigned to the seed variable.*/
    // std::cout << seed << "\n";

    long long int seed = static_cast<long long int>(time(0));
    std::cout << "Seed: " << seed << "\n";

    srand(seed); // Seed the random number generator with the current time

    for (int i = 0; i < 5; ++i)
    {
        int num = rand();
        std::cout << num << "\n";
    }

    return 0;
}