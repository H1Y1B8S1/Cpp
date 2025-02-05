/*
Inline Functions:
- Eliminate function call overhead.
- Improve performance for small, frequently used functions.
- May increase binary size due to code duplication.

Non-Inline Functions:
- Have function call overhead.
- Are better for larger functions or when binary size is a concern.
- Easier to debug.

Compiler Discretion:
- The inline keyword is a suggestion. The compiler may ignore it if the function is too large or complex.


Performance Comparison:
Non-Inline Function
Pros:
- Smaller binary size (function code exists only once).
- Easier to debug (function calls are preserved).

Cons:
- Function call overhead (slower for small, frequently used functions).

Inline Function
Pros:
- No function call overhead (faster for small, frequently used functions).

Cons:
- Larger binary size (code duplication at each call site).
- Harder to debug (no distinct function call in the binary).
*/


#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Inline function
inline int addInline(int a, int b) {
    return a + b;
}

// Non-inline function
int addNonInline(int a, int b) {
    return a + b;
}

int main() {
    const int iterations = 100000000; // 100 million iterations
    int result = 0;

    // Test inline function
    auto startInline = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        result += addInline(i, i);
    }
    auto endInline = high_resolution_clock::now();
    auto durationInline = duration_cast<milliseconds>(endInline - startInline);

    // Test non-inline function
    auto startNonInline = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        result += addNonInline(i, i);
    }
    auto endNonInline = high_resolution_clock::now();
    auto durationNonInline = duration_cast<milliseconds>(endNonInline - startNonInline);

    // Output results
    cout << "Inline function time: " << durationInline.count() << " ms" << endl;
    cout << "Non-inline function time: " << durationNonInline.count() << " ms" << endl;

    return 0;
}
//Output:
//Inline function time: 150 ms
//Non-inline function time: 300 ms