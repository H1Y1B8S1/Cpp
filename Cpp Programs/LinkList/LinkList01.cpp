#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Function to insert a node at the beginning
void insertAtBeginning(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Function to insert a node after a given node
void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == nullptr)
    {
        std::cout << "The given previous node cannot be NULL";
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Function to insert a node at the end
void insertAtEnd(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref; // temp
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head_ref == nullptr)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != nullptr)
    {
        last = last->next;
    }
    last->next = new_node;
}

// Function to delete a node by key
void deleteNode(Node **head_ref, int key)
{
    Node *temp = *head_ref;
    Node *prev = nullptr;

    if (temp != nullptr && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr)
        return; // it means the key was not found in the list.

    prev->next = temp->next;
    delete temp;
}

// Function to search for a node
bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

// Function to traverse the linked list and print the elements
void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    insertAtEnd(&head, 8);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 1);
    insertAtEnd(&head, 100);
    insertAfter(head->next, 20);

    printList(head);

    cout << "Deleting node with value 20" << endl;
    deleteNode(&head, 20);
    cout << "Linked List after Deletion of 20: \n";
    printList(head);

    cout << "Searching for node with value 8: ";
    if (search(head, 8))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}