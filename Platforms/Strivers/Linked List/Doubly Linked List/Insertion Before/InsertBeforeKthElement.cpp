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

Node *insertBeforeHead(Node *head, int val)
{
 Node *newHead = new Node(val, head, nullptr);
 head->back = newHead;

 return newHead;
}

Node *insertBeforeTail(Node *head, int val)
{
 if (head->next == NULL)
  return insertBeforeHead(head, val);

 Node *tail = head;
 while (tail->next != NULL)
 {
  tail = tail->next;
 }
 Node *prev = tail->back;
 Node *newNode = new Node(val, tail, prev);
 prev->next = newNode;
 tail->back = newNode;
 return head;
}

Node *insertBeforeKthElement(Node *head, int k, int val)
{
 if (k == 1)
 {
  return insertBeforeHead(head, val);
 }
 Node *temp = head;
 int count = 0;
 while (temp != NULL)
 {
  count++;
  if (count == k)
   break;
  temp = temp->next;
 }

 Node *prev = temp->back;
 Node *newNode = new Node(val, temp, prev);

 prev->next = newNode;
 temp->back = newNode;

 return head;
}

int main()
{
 vector<int> arr = {12, 5, 8, 7};
 Node *head = convertArrToDLL(arr);
 head = insertBeforeKthElement(head, 4, 50);
 print(head);
 return 0;
}