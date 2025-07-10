#include <iostream>
#include <queue>
using namespace std;

class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;

public:
    Tree(int x)
    {
        data = x;
        left = right = nullptr;
    }
};

void builtFromLevelOrder(Tree *root)
{
    queue<Tree *> q;
    cout << "Enter data 1: ";
    int dat;
    cin >> dat;

    root = new Tree(dat);

    q.push(root);

    while (!q.empty())
    {
        Tree *front = q.front();
        q.pop();

        cout << "Enter data for front: " << front->data;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            front->left = new Tree(leftData);
            q.push(front->left);
        }

        cout << "Enter data for right: " << front->data;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            front->right = new Tree(rightData);
            q.push(front->right);
        }
    }
}

void levelOrderPrint(Tree *root)
{
    if (!root)
    {
        return;
    }
    queue<Tree *> q;

    q.push(root);

    while (!q.empty())
    {
        // int size = q.size();
        Tree *front = q.front();
        q.pop();
        cout << front->data << " ";

        if (front->left)
        {
            q.push(front->left);
        }
        if (front->right)
        {
            q.push(front->right);
        }
    }
}
int main()
{
    Tree *root = nullptr;

    builtFromLevelOrder(root);

    cout << "\nLevel Order Traversal of the Tree:\n";
    levelOrderPrint(root);

    return 0;
}