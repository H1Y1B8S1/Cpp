/* 
Benefits of Inline Functions:
Reduced Function Call Overhead: No need to push/pop arguments onto the stack or jump to a function location.
Improved Performance: For small functions, inlining can make the program faster by eliminating the overhead of function calls.
Avoids Macro Pitfalls: Inline functions are safer and more flexible than macros (e.g., type-checking is preserved).

When to Use Inline Functions:
For small functions (1-3 lines of code).
When the function is called frequently (e.g., in loops).
When performance is critical.

# Real-world Example: Calculating the distance between two game objects repeatedly
in a performance-critical loop.
*/

#include <iostream>
#include <cmath>

// Inline function to compute the Euclidean distance between two points.
// In a game, this might be used for collision detection or AI decision-making.

inline double distance(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx * dx + dy * dy);
}

int main()
{
    double d = distance(0.0, 0.0, 3.0, 4.0); // Expected distance: 5.0
    std::cout << "Distance: " << d << std::endl;
    return 0;
}