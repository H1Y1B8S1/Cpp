/*
Push: Add an element to the top of the stack.
Pop: Remove the top element from the stack.
Top/Peek: Return the top element without removing it.
isEmpty: Check if the stack is empty.
Size: Return the number of elements in the stack.
*/

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element
    std::cout << "Top element: " << myStack.top() << "\n";

    // Pop the top element
    myStack.pop();
    myStack.pop();

    // Print the top element
    std::cout << "Top element: " << myStack.top() << "\n";

    // Check if the stack is empty
    if (myStack.empty())
        std::cout << "The stack is empty." << std::endl;
    else
        std::cout << "The stack is not empty." << std::endl;

    // Get the size of the stack
    std::cout << "Stack size: " << myStack.size() << std::endl;

    return 0;
}