#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertAtBeginning(Node *head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
    newNode->next = nullptr;
}
void insertAtPos(Node* head, int pos, int val){
    
}
int main()
{

    return 0;
}