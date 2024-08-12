#include <iostream>
#include <string>
#include <vector>

/*
(1) Function Templates
(2) Class Templates
(3) Template Specialization
(4) Non-type Template Parameters
(5) Template Instantiation
(6) Variadic Templates
(7) Type Traits
*/

using namespace std;

// #[01] Function Templates
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Specialization for `std::string`
template <>
std::string add<std::string>(std::string a, std::string b) {
    return a + b;
}

// #[02] Class Templates
template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(const T& elem) {
        elements.push_back(elem);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        }
    }

    T top() const {
        if (!elements.empty()) {
            return elements.back();
        }
        throw std::out_of_range("Stack<>::top(): empty stack");
    }

    bool empty() const {
        return elements.empty();
    }
};

// #[03] Template Specialization
template <typename T>
class Comparator {
public:
    static bool compare(const T& a, const T& b) {
        return a < b;
    }
};

// Specialization for `std::string`
template <>
class Comparator<std::string> {
public:
    static bool compare(const std::string& a, const std::string& b) {
        return a.compare(b) < 0;
    }
};

// #[04] Non-type Template Parameters
template <typename T, std::size_t N>
class Array {
private:
    T arr[N];

public:
    T& operator[](std::size_t index) {
        return arr[index];
    }

    std::size_t size() const {
        return N;
    }
};

// #[05] Template Instantiation
template class Stack<int>; // Explicit instantiation for Stack<int>

// #[06] Variadic Templates
template <typename... Args>
void print(Args... args) {
    (std::cout << ... << args) << std::endl;
}

// #[07] Type Traits
#include <type_traits>

template <typename T>
void checkType() {
    if (std::is_integral<T>::value) {
        std::cout << "Integral type" << std::endl;
    } else {
        std::cout << "Non-integral type" << std::endl;
    }
}

int main() {
    // #[01] Function Templates
    std::cout << "Add integers: " << add(5, 3) << std::endl;
    std::cout << "Add strings: " << add(std::string("Hello, "), std::string("World!")) << std::endl;

    // #[02] Class Templates
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    std::cout << "Top element: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;

    // #[03] Template Specialization
    std::cout << "Comparing integers: " << Comparator<int>::compare(5, 3) << std::endl;
    std::cout << "Comparing strings: " << Comparator<std::string>::compare("Apple", "Banana") << std::endl;

    // #[04] Non-type Template Parameters
    Array<int, 5> intArray;
    for (std::size_t i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 2;
    }
    std::cout << "Array contents: ";
    for (std::size_t i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // #[05] Template Instantiation
    Stack<int> anotherIntStack; // Uses the explicitly instantiated Stack<int>

    // #[06] Variadic Templates
    print(1, " ", 2.5, " ", "Hello", " World!");

    // #[07] Type Traits
    checkType<int>(); // Integral type
    checkType<double>(); // Non-integral type

    return 0;
}
