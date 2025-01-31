#include <iostream>

/*
This file covers all major functionalities of macros in C++:
1. Defining macros
2. Macro arguments
3. Conditional compilation
4. Stringification
5. Token pasting
6. Variadic macros
7. Common use cases (e.g., debugging, constants, etc.)
*/

// #[01] Defining macros
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

// #[02] Macro arguments
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// #[03] Conditional compilation
#define DEBUG 1
#ifdef DEBUG
#define DEBUG_PRINT(x) std::cout << "Debug: " << x << std::endl
#else
#define DEBUG_PRINT(x)
#endif

// #[04] Stringification
#define STRINGIFY(x) #x

// #[05] Token pasting
#define CONCAT(a, b) a##b

// #[06] Variadic macros
#define PRINT_ARGS(...) do { \
    std::cout << "Arguments: "; \
    printArgs(__VA_ARGS__); \
    std::cout << std::endl; \
} while (0)

// Helper function to print each argument
template <typename T>
void printArgs(T arg) {
    std::cout << arg;
}

template <typename T, typename... Args>
void printArgs(T first, Args... rest) {
    std::cout << first << " ";
    printArgs(rest...);
}

// #[07] Common use cases
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main(void)
{
    // #[01] Defining macros
    std::cout << "Value of PI: " << PI << std::endl;
    std::cout << "Square of 5: " << SQUARE(5) << std::endl;

    // #[02] Macro arguments
    std::cout << "Max of 10 and 20: " << MAX(10, 20) << std::endl;

    // #[03] Conditional compilation
    DEBUG_PRINT("This is a debug message");

    // #[04] Stringification
    std::cout << "Stringified: " << STRINGIFY(Hello World) << std::endl;

    // #[05] Token pasting
    int xy = 100;
    std::cout << "Concatenated value: " << CONCAT(x, y) << std::endl;

    // #[06] Variadic macros
    PRINT_ARGS(1, 2, 3, 4, 5);

    // #[07] Common use cases
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Array size: " << ARRAY_SIZE(arr) << std::endl;

    return 0;
}
