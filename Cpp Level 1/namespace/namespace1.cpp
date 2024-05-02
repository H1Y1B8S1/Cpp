#include <iostream>

// Define namespace 'a' and a function 'a'
namespace a {
    void a() {
        std::cout << "Function 'a' is called." << "\n";
    }
}

// Define namespace 'b' and a function 'b'
namespace b {
    void b() {
        std::cout << "Function 'b' is called." << "\n";
    }
}

// Define an unnamed namespace and a function 'c'
namespace {
    void c() {
        std::cout << "Function 'c' is called." << "\n";
    }
}

int main() {
    // Call function 'c' from the unnamed namespace
    c();

    // Call function 'a' from namespace 'a'
    a::a();

    // Call function 'b' from namespace 'b'
    b::b();

    // Print a message from the main function
    std::cout << "Main function is called." << "\n";

    return 0;
}
