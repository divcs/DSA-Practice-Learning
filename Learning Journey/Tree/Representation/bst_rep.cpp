#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Tree
{
public:
    int val;
    Tree *left;
    Tree *right;

    Tree(int value)
    {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

Tree *insert(Tree *root, int val)
{
    if (root->val == val)
    {
        Tree *newTree = new Tree(val);
        return root;
    }
    if (root->val < val)
    {
        root->right = insert(root->right, val);
    }
    else if (root->val > val)
    {
        root->left = insert(root->left, val);
    }
    return root;
}

bool search(Tree *root, int val)
{
    if (root->val == val)
    {
        return true;
    }
    if (root->val < val)
    {
        return search(root->right, val);
    }
    else if (root->val > val)
    {
        return search(root->left, val);
    }
    return false;
}

void inorder(Tree *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

void preorder(Tree *root)
{
    if (root)
    {
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Tree *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }
}

vector<vector<int>> levelOrder(Tree *root)
{
    queue<Tree *> q;
    vector<vector<int>> ans;

    q.push(root);

    if (!root)
        return ans;

    while (!q.empty())
    {
        vector<int> temp;
        int s = q.size();

        for (int i = 0; i < s; i++)
        {
            Tree *front = q.front();
            q.pop();

            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
            temp.push_back(front->val);
        }
        ans.push_back(temp);
    }
    return ans;
}

int maxDepth(Tree *root)
{
    if (!root)
        return 0;

    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

Tree *findMax(Tree *root)
{
    while (root->right)
    {
        root = root->right;
    }
    return root;
}

Tree *findMin(Tree *root)
{
    while (root->left)
        root = root->left;
    return root;
}

Tree *deleteTree(Tree *root, int key)
{
    if (!root)
        return NULL;
    if (key < root->val)
        root->left = deleteTree(root->left, key);
    else if (key > root->val)
        root->right = deleteTree(root->right, key);
    else
    {
        if (!root->left)
            return root->right;
        else if (!root->right)
            return root->left;
        Tree *temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteTree(root->right, temp->val);
    }
    return root;
}

Tree *sortedArrayToBST(vector<int> &nums)
{
    return buildBST(nums, 0, nums.size() - 1);
}

Tree *buildBST(vector<int> &nums, int left, int right)
{
    if (left > right)
        return nullptr;

    int mid = left + (right - left) / 2; // to avoid overflow
    Tree *root = new Tree(nums[mid]);

    root->left = buildBST(nums, left, mid - 1);
    root->right = buildBST(nums, mid + 1, right);

    return root;
}
int main()
{
    Tree *root = nullptr;

    vector<int> elements = {20, 30, 40, 50, 60};

    for (int elem : elements)
    {
        if (!root)
        {
            root = new Tree(elem);
        }
        else
        {
            insert(root, elem);
        }
    }
    return 0;
}