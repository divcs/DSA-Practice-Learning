#include <iostream>
using namespace std;

Node *insert(Node *root, int x)
{
    if (!root)
    {
        Node *temp = new Node(x);
        return temp;
    };

    if (root->data > x)
    {
        root->left = insert(root->left, x);
    }
    else if (root->data < x)
    {
        root->right = insert(root->right, x);
    }
    return root;
}

bool search(Node *root, int x)
{
    if (!root)
        return false;

    if(root -> data == x) return true; 

    if (root->data > x)
    {
        return search(root->left, x);
    }
    else if (root->data < x)
    {
        return search(root->right, x);
    }
    
}

int main()
{

    return 0;
}