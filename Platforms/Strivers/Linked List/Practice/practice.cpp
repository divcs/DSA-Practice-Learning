#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, int d)
{
    Node *newTail = new Node(d);
    if (head == NULL)
    {
        head = newTail;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newTail;
}

void insertAtPos(Node *&head, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    int count = 1;
    Node *curr = head;

    while (count < pos - 1)
    {

        curr = curr->next;
        count++;
    }
    if (curr->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}

void deleteAtPos(Node *&head, int pos)
{
    int count = 0;
    Node *curr = head;
    Node *prev = NULL;

    while (count < pos - 1)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    free(curr);
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(50);

    insertAtHead(head, 10);
    insertAtTail(head, 60);

    // print(head);
    insertAtPos(head, 2, 20);
    deleteAtPos(head, 2);
    print(head);

    return 0;
}