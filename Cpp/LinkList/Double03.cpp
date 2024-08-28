#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int val) : data(int), next(nullptr), prev(nullptr) {}
};

// *[1] Insertion at the Front:
void insertFront(Node *&head, int data)
{
    Node *newNode = new Node(data);

    newNode->next = head;
    head = newNode;
}

// *[2] Insertion at the End:
void insertEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// *[3] Deletion of a Node:
void deleteNode(Node *&head, Node *delNode)
{
    if (head == nullptr || delNode == nullptr)
        return;

    if (head == delNode)
    {
        head = delNode->next;
    }

    if (delNode->next != nullptr)
    {
        delNode->next->prev = delNode->prev;
    }

    if (delNode->prev != nullptr)
    {
        delNode->prev->next = delNode->next;
    }

    delete delNode;
}

//*[4]Traversing the Doubly Linked List:
// Forward Traversal:
void printForward(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Backward Traversal:
void printBackward(Node *head)
{
    Node *temp = head;
    if (temp == nullptr)
        return;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->prev;
    }
    std::cout << std::endl;
}
