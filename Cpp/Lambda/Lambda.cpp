/*Lambda functions in C++ provide a concise way to create anonymous functions.
They are especially useful when you need a simple function for a short period and don't want to
define a full function using the traditional function syntax. Let's go through
the basics and then touch on some more advanced concepts.

Basic Syntax:
Lambda functions have the following basic syntax:

        [capture](parameters) -> return_type {
                                // function body
                                }

- capture: It is used to capture variables from the enclosing scope. It can be empty ([]) or
    capture specific variables.
- parameters: Similar to function parameters.
- return_type: Similar to the return type of a regular function.
- function body: The actual code of the function.

*/

#include <iostream>

// Example 1: Simple Lambda
//  int main()
//  {
//      // Basic lambda function
//      auto add = [](int a, int b) -> int
//      {
//          return a + b;
//      };

//     // Using the lambda function
//     std::cout << "Sum: " << add(3, 5) << std::endl;

//     return 0;
// }

// Example 2: Lambda with Capture
// int main()
// {
//     int x = 5;
//     int y = 10;

//     // Lambda function capturing external variables
//     auto multiply = [x, y](int a) -> int
//     {
//         return a * x * y;
//     };

//     // Using the lambda function
//     std::cout << "Result: " << multiply(2) << std::endl;

//     return 0;
// }

// Mutable Lambdas -> If you want to modify the captured variables, use the mutable keyword:
// int main()
// {
//     int x = 5;

//     // Mutable lambda
//     auto incrementAndPrint = [x]() mutable
//     {
//         x++;
//         std::cout << "Incremented x: " << x << std::endl;
//     };

//     incrementAndPrint();
//     std::cout << "Original x: " << x << std::endl;

//     return 0;
// }

// Lambda with Generic Parameters
// template <typename T>

// void printValue(T value)
// {
//     // Lambda with generic parameter
//     auto print = [](const T &val)
//     {
//         std::cout << val << std::endl;
//     };

//     print(value);
// }

// int main()
// {
//     printValue(42);
//     printValue("Hello, Lambda!");

//     return 0;
// }

// Returning Functions from Lambda
// #include <functional>

// int main()
// {
//     // Lambda returning a function
//     auto getMultiplier = [](int factor) -> std::function<int(int)>
//     {
//         return [factor](int x)
//         { return x * factor; };
//     };

//     auto timesTwo = getMultiplier(2);
//     std::cout << "Result: " << timesTwo(5) << std::endl;

//     return 0;
// }
