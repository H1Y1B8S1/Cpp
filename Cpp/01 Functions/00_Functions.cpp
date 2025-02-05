#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
#include <functional> // for std::function

/*
This file covers all major functionalities of functions in C++:
1. Function declaration and definition
2. Function parameters and return types
3. Function overloading
4. Inline functions
5. Lambda expressions
6. Function pointers
7. Recursion
8. Default arguments
9. Pass by value vs pass by reference
10. Function templates
11. std::function and higher-order functions
12. Variadic functions
*/

// #[01] Function declaration and definition
int add(int a, int b); // Declaration
int add(int a, int b) { // Definition
    return a + b;
}

// #[02] Function parameters and return types
double multiply(double a, double b) {
    return a * b;
}

// #[03] Function overloading
int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

// #[04] Inline functions
inline int subtract(int a, int b) {
    return a - b;
}

// #[05] Lambda expressions
auto lambda = [](int a, int b) { return a * b; };

// #[06] Function pointers
int (*funcPtr)(int, int) = add;

// #[07] Recursion
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// #[08] Default arguments
int power(int base, int exponent = 2) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// #[09] Pass by value vs pass by reference
void increment(int& x) {
    x++;
}

void increment(int* x) {
    (*x)++;
}

// #[10] Function templates
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// #[11] std::function and higher-order functions
void printResult(std::function<int(int, int)> func, int a, int b) {
    std::cout << "Result: " << func(a, b) << std::endl;
}

// #[12] Variadic functions
template <typename... Args>
void printValues(Args... args) {
    (std::cout << ... << args) << std::endl;
}

int main(void)
{
    // #[01] Function declaration and definition
    std::cout << "Add: " << add(5, 10) << std::endl;

    // #[02] Function parameters and return types
    std::cout << "Multiply: " << multiply(2.5, 3.5) << std::endl;

    // #[03] Function overloading
    std::cout << "Add (3 args): " << add(5, 10, 15) << std::endl;
    std::cout << "Add (double): " << add(2.5, 3.5) << std::endl;

    // #[04] Inline functions
    std::cout << "Subtract: " << subtract(10, 5) << std::endl;

    // #[05] Lambda expressions
    std::cout << "Lambda: " << lambda(5, 10) << std::endl;

    // #[06] Function pointers
    std::cout << "Function pointer: " << funcPtr(5, 10) << std::endl;

    // #[07] Recursion
    std::cout << "Factorial: " << factorial(5) << std::endl;

    // #[08] Default arguments
    std::cout << "Power (default exponent): " << power(5) << std::endl;
    std::cout << "Power: " << power(5, 3) << std::endl;

    // #[09] Pass by value vs pass by reference
    int x = 10;
    increment(x);
    std::cout << "Increment (by reference): " << x << std::endl;

    int y = 20;
    increment(&y);
    std::cout << "Increment (by pointer): " << y << std::endl;

    // #[10] Function templates
    std::cout << "Max (int): " << max(5, 10) << std::endl;
    std::cout << "Max (double): " << max(2.5, 3.5) << std::endl;

    // #[11] std::function and higher-order functions
    // Fix: Use a lambda or explicit cast to resolve the overload
    printResult([](int a, int b) { return add(a, b); }, 5, 10); // Using a lambda
    printResult(static_cast<int(*)(int, int)>(add), 5, 10);     // Using a function pointer

    // #[12] Variadic functions
    printValues(1, 2, 3, 4, 5);
    printValues("Hello", " ", "World", "!");

    return 0;
}