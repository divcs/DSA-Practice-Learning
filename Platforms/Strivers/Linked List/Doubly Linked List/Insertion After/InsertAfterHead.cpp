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

Node *insertAfterHead(Node *head, int val)
{
 if (head->next == NULL)
 {
  Node *newNode = new Node(val, nullptr, head);
  head->next = newNode;
  return head;
 }

 Node *temp = head->next;

 Node *newNode = new Node(val, temp, head);
 head->next = newNode;
 temp->back = newNode;

 return head;
}
int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToDLL(arr);
 head = insertAfterHead(head, 10);
 print(head);
 return 0;
}