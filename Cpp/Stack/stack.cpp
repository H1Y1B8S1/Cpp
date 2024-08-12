#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>
#include <string>

/*
(1) Stack Initialization
(2) Adding Elements
(3) Removing Elements
(4) Accessing Elements
(5) Size and Capacity
(6) Checking for Emptiness
(7) Iterating over Stack
(8) Custom Container with Stack
*/

int main()
{
    // #[01] Stack Initialization
    std::stack<int> stack1; // Default constructor
    std::stack<int, std::deque<int>> stack2; // Stack with std::deque as underlying container
    std::stack<int, std::vector<int>> stack3; // Stack with std::vector as underlying container
    std::stack<int, std::list<int>> stack4; // Stack with std::list as underlying container

    std::cout << "Initialized stacks." << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding Elements
    stack1.push(10); // Adds 10 to the top of the stack
    stack1.push(20); // Adds 20 to the top
    stack1.push(30); // Adds 30 to the top

    std::cout << "Stack after pushing elements: ";
    std::stack<int> tempStack = stack1; // Temporary stack for displaying elements
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " "; // Access top element
        tempStack.pop(); // Remove top element
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[03] Removing Elements
    stack1.pop(); // Removes the top element (30)

    std::cout << "Stack after popping one element: ";
    tempStack = stack1; // Reset temporary stack for displaying elements
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " "; // Access top element
        tempStack.pop(); // Remove top element
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[04] Accessing Elements
    std::cout << "Top element: " << stack1.top() << std::endl; // Accessing the top element without removing it
    /*_______________________________________________________________________________________________________*/

    // #[05] Size and Capacity
    std::cout << "Size of stack1: " << stack1.size() << std::endl; // Gets the number of elements in the stack

    /*_______________________________________________________________________________________________________*/

    // #[06] Checking for Emptiness
    std::cout << "Is stack1 empty? " << (stack1.empty() ? "Yes" : "No") << std::endl; // Checks if the stack is empty
    /*_______________________________________________________________________________________________________*/

    // #[07] Iterating over Stack
    // Stack does not support direct iteration. Use a temporary stack to display elements.
    std::cout << "Iterating over stack1: ";
    tempStack = stack1; // Reset temporary stack for displaying elements
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " "; // Access top element
        tempStack.pop(); // Remove top element
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[08] Custom Container with Stack
    std::deque<int> deque = {1, 2, 3, 4, 5}; // Initialize deque
    std::stack<int, std::deque<int>> customStack(deque); // Stack using deque as underlying container

    std::cout << "Custom stack initialized with deque: ";
    while (!customStack.empty()) {
        std::cout << customStack.top() << " "; // Access top element
        customStack.pop(); // Remove top element
    }
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    return 0;
}
