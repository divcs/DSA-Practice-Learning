#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void insertAtHead(Node *&h, int val)
{
    Node *temp = new Node(val);
    temp->next = h;
    h = temp;
}

void insertAtTail(Node *&tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = tail->next;
}

void printLL(Node *h)
{
    if (h == nullptr)
        return;

    Node *temp = h;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // Node *head = nullptr;
    Node *n1 = new Node(10);
    Node *head = n1;
    insertAtHead(head, 20);

    Node *tail = n1;
    insertAtTail(tail, 30);
    printLL(head);

    return 0;
}