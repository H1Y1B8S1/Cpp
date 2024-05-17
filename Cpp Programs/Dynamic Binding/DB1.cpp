#include <iostream>

// Base class with a virtual function
class Base
{
public:
    virtual void display()
    {
        std::cout << "Display from Base" << std::endl;
    }

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Base() = default;
};

// Derived class overriding the display function
class Derived : public Base
{
public:
    void display() override
    {
        std::cout << "Display from Derived" << std::endl;
    }
};

// Another derived class overriding the display function
class AnotherDerived : public Base
{
public:
    void display() override
    {
        std::cout << "Display from AnotherDerived" << std::endl;
    }
};

/*
Using Dynamic Binding: With dynamic binding,
you can create a base class pointer that points to an object of the derived class:
*/

int main()
{
    // Base class pointer pointing to Derived class object
    Base *basePtr1 = new Derived();
    basePtr1->display(); // Output: "Display from Derived"

    // Base class pointer pointing to AnotherDerived class object
    Base *basePtr2 = new AnotherDerived();
    basePtr2->display(); // Output: "Display from AnotherDerived"

    // Clean up
    delete basePtr1;
    delete basePtr2;

    return 0;
}

/* Here’s what happens:
> ptr is a pointer to Base, but it points to an object of Derived.
> When ptr->display() is called, the call is resolved at runtime.
> The runtime system determines that ptr actually points to a Derived object
    and calls the Derived class's display() method.


Summary:
> Dynamic Binding: Method resolution occurs at runtime.
> Polymorphism: Different classes can be treated uniformly through a common interface.
> Virtual Functions: Enable dynamic binding by using the virtual keyword.
> V-Table: Mechanism used by the compiler to support dynamic binding.
> Flexibility: Allows writing more flexible and maintainable code.
*/