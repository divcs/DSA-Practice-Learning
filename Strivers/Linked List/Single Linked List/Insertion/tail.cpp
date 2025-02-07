#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
 int data;
 Node *next;

public:
 Node(int data1, Node *next1)
 {
  data = data1;
  next = next1;
 }

 Node(int data1)
 {
  data = data1;
  next = nullptr;
 }
};

Node *convertArrToLL(vector<int> &arr)
{
 Node *head = new Node(arr[0]);
 Node *mover = head;

 for (int i = 1; i < arr.size(); i++)
 {
  Node *temp = new Node(arr[i]);
  mover->next = temp;
  mover = temp; // or mover=mover->next
 }
 return head;
}
void print(Node *head)
{
 while (head != NULL)
 {
  cout << head->data << " ";
  head = head->next;
 }
}

Node *insertHead(Node *head, int val)
{
 Node *temp = new Node(val, head);
 return temp;
 //  or just write: return new Node(val, head)
}
Node *insertTail(Node *head, int val)
{
 if (head == NULL)
  return new Node(val);

 Node *temp = head;
 while (temp->next != NULL)
 {
  temp = temp->next;
 }
 Node *newNode = new Node(val);
 temp->next = newNode;
 return head;
}
int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToLL(arr);
 head = insertTail(head, 500);
 print(head);
 return 0;
}