#include <iostream>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>

using namespace std;

struct Node
{
public:
    int val;
    Node *left, *right;
    Node(int value) : val(value), left(NULL), right(NULL) {}
};

int isBalanced(Node *root)
{
    if (!root)
        return 0;
    int lh = isBalanced(root->left);
    if (lh == -1)
        return -1;
    int rh = isBalanced(root->right);
    if (rh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;
    return max(lh, rh) + 1;
}

bool checkBalanced(Node *root)
{
    return isBalanced(root) != -1;
}

Node *findMin(Node *root)
{
    while (root->left)
        root = root->left;
    return root;
}

Node *deleteNode(Node *root, int key)
{
    if (!root)
        return NULL;
    if (key < root->val)
        root->left = deleteNode(root->left, key);
    else if (key > root->val)
        root->right = deleteNode(root->right, key);
    else
    {
        if (!root->left)
            return root->right;
        else if (!root->right)
            return root->left;
        Node *temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

Node *buildTreeLevelOrder()
{
    int val;
    cout << "Enter root: ";
    cin >> val;
    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        int leftVal, rightVal;
        cout << "Enter left of " << curr->val << ": ";
        cin >> leftVal;
        if (leftVal != -1)
        {
            curr->left = new Node(leftVal);
            q.push(curr->left);
        }

        cout << "Enter right of " << curr->val << ": ";
        cin >> rightVal;
        if (rightVal != -1)
        {
            curr->right = new Node(rightVal);
            q.push(curr->right);
        }
    }
    return root;
}

int height(Node *root)
{
    if (!root)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

void levelOrder(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();
        cout << cur->val << " ";
        if (cur->left)
            q.push(cur->left);
        if (cur->right)
            q.push(cur->right);
    }
}

bool isValidBST(Node *root)
{
    return validate(root, LONG_MIN, LONG_MAX);
}

bool validate(Node *node, long minVal, long maxVal)
{
    if (!node)
        return true;

    if (node->val <= minVal || node->val >= maxVal)
        return false;

    return validate(node->left, minVal, node->val) &&
           validate(node->right, node->val, maxVal);
}

bool isIdentical(Node *a, Node *b)
{
    if (!a && !b)
        return true;
    if (!a || !b)
        return false;
    return (a->val == b->val) && isIdentical(a->left, b->left) && isIdentical(a->right, b->right);
}



int main()
{

    return 0;
}