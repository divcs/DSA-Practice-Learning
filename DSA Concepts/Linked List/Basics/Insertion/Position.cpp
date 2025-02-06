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
Node *insertPosition(Node *head, int el, int k)
{
 if (head == NULL)
 {
  // ll empty, inserting first node
  if (k == 1)
  {
   return new Node(el);
  }
  else
  //
  {
   return head;
  }
 }
 // ll not empty, inserting at head
 if (k == 1)
 {
  return new Node(el, head);
 }
 int count = 0;
 Node *temp = head;
 while (temp != NULL)
 {
  count++;

  // making sure the new element node's position is just after the element whose next or link has to break
  if (count == (k - 1))
  {
   // x->next = temp->next in constructor is given before temp->next=x so that the elements after this new Node will be connected to this node first, otherwise we'd have no way to access them.
   Node *x = new Node(el, temp->next);
   temp->next = x;
   break;
  }
  temp = temp->next;
 }
 return head;
}
int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToLL(arr);
 head = insertPosition(head, 300, 3);
 print(head);
 return 0;
}