#include <iostream>

// Definition of the TreeNode structure
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    // Constructor to initialize a new node
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a new node in the binary tree
TreeNode *insert(TreeNode *root, int data)
{
    if (root == nullptr)
    {
        return new TreeNode(data);
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to search for a node in the binary tree
bool search(TreeNode *root, int key)
{
    if (root == nullptr)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

// Inorder Traversal (Left, Root, Right)
void inorder(TreeNode *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    std::cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal (Root, Left, Right)
void preorder(TreeNode *root)
{
    if (root == nullptr)
        return;

    std::cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal (Left, Right, Root)
void postorder(TreeNode *root)
{
    if (root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    std::cout << root->data << " ";
}

// Main function to demonstrate the binary tree operations
int main()
{
    TreeNode *root = nullptr;

    // Insert nodes into the binary tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Search for a value in the tree
    int key = 40;
    if (search(root, key))
    {
        std::cout << key << " found in the tree.\n";
    }
    else
    {
        std::cout << key << " not found in the tree.\n";
    }

    // Traverse and print the tree
    std::cout << "Inorder traversal: ";
    inorder(root);
    std::cout << std::endl;

    std::cout << "Preorder traversal: ";
    preorder(root);
    std::cout << std::endl;

    std::cout << "Postorder traversal: ";
    postorder(root);
    std::cout << std::endl;

    return 0;
}
