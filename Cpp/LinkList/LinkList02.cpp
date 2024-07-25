#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}                   // Default Constructor:
    ListNode(int x) : val(x), next(nullptr) {}              // Parameterized Constructor
    ListNode(int x, ListNode *next) : val(x), next(next) {} // Parameterized Constructor with Next Node
};

// Function to traverse and print the linked list
void traverse(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to insert a node at the beginning
/*
        Reference to a Pointer (ListNode *&head)
*/
void insertAtBeginning(ListNode *&head, int val) 
{
    ListNode *newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    ListNode *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

// Function to insert a node after a given node
void insertAfter(ListNode *prevNode, int val)
{
    if (prevNode == nullptr)
    {
        std::cout << "The given previous node cannot be nullptr." << std::endl;
        return;
    }
    ListNode *newNode = new ListNode(val);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to delete a node with a given value
void deleteNode(ListNode *&head, int val)
{
    if (head == nullptr)
        return;

    if (head->val == val)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    ListNode *current = head;
    while (current->next != nullptr && current->next->val != val)
    {
        current = current->next;
    }

    if (current->next == nullptr)
        return;

    ListNode *temp = current->next;
    current->next = current->next->next;
    delete temp;
}

// Function to search for a value in the linked list
bool search(ListNode *head, int val)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        if (current->val == val)
            return true;
        current = current->next;
    }
    return false;
}

int main()
{
    ListNode *head = nullptr;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    std::cout << "Linked list after inserting at end: ";
    traverse(head);

    insertAtBeginning(head, 0);
    std::cout << "Linked list after inserting at beginning: ";
    traverse(head);

    insertAfter(head->next, 1); // Insert after the first node
    std::cout << "Linked list after inserting after first node: ";
    traverse(head);

    deleteNode(head, 2);
    std::cout << "Linked list after deleting value 2: ";
    traverse(head);

    int searchValue = 3;
    if (search(head, searchValue))
    {
        std::cout << searchValue << " is found in the linked list." << std::endl;
    }
    else
    {
        std::cout << searchValue << " is not found in the linked list." << std::endl;
    }

    return 0;
}
