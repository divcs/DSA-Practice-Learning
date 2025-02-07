#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
 int data;
 Node *next;
 Node *back;

public:
 Node(int data1, Node *next1, Node *back1)
 {
  data = data1;
  next = next1;
  back = back1;
 }

 Node(int data1)
 {
  data = data1;
  next = nullptr;
  back = nullptr;
 }
};

Node *convertArrToDLL(vector<int> &arr)
{
 Node *head = new Node(arr[0]);
 Node *prev = head;

 for (int i = 1; i < arr.size(); i++)
 {
  Node *temp = new Node(arr[i], nullptr, prev);
  prev->next = temp;
  prev = temp;
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
Node *deleteHead(Node *head)
{
 if (head == NULL || head->next == NULL)
 {
  return NULL;
 }
 Node *prev = head;
 head = head->next;

 head->back = nullptr;
 prev->next = nullptr;

 delete prev;
 return head;
}
Node *deleteTail(Node *head)
{
 if (head == NULL || head->next == NULL)
  return NULL;
 Node *tail = head;
 while (tail->next != NULL)
 {
  tail = tail->next;
 }
 Node *newTail = tail->back;
 newTail->next = nullptr;
 tail->back = nullptr;

 delete tail;
 return head;
}
Node *removeKthEl(Node *head, int k)
{
 if (head == NULL)
  return NULL;
 int count = 0;

 Node *kNode = head;
 while (kNode != NULL)
 {
  count++;
  if (count == k)
   break;
  kNode = kNode->next;
 }
 Node *prev = kNode->back;
 Node *front = kNode->next;

 if (prev == NULL && front == NULL)
 {
  return NULL;
 }
 else if (prev == NULL)
 {
  return deleteHead(head);
 }
 else if (head == NULL)
 {
  return deleteTail(head);
 }
 prev->next = front;
 front->back = prev;

 kNode->next = nullptr;
 kNode->back = nullptr;

 delete kNode;
 return head;
}
Node *deleteNode(Node *temp)
{
 Node *prev = temp->back;
 Node *front = temp->next;

 if (front == NULL)
 {
  prev->next = nullptr;
  temp->back = nullptr;
  free(temp);
  return;
 }
 prev->next = front;
 front->back = prev;

 temp->next = temp->back = nullptr;
 free(temp);
}
int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToDLL(arr);
 // head can't be deleted
 head = deleteNode(head->next);
 head = deleteNode(head->next->next);
 print(head);
 return 0;
}
