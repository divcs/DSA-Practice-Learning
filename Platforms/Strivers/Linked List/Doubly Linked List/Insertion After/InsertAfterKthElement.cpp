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

Node *insertAfterKthElement(Node *head, int k, int val)

{
 if (head == NULL)
 {
  return new Node(val, nullptr, nullptr);
 }
 Node *temp = head;
 int count = 1;
 while (temp != NULL && count < k)
 {
  temp = temp->next;
  count++;
 }
 if (temp == NULL)
 {
  return head;
 }
 Node *front = temp->next;
 Node *newNode = new Node(val, front, temp);
 temp->next = newNode;

 if (front != NULL)
 {
  front->back = newNode;
 }
 return head;
}

int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToDLL(arr);
 head = insertAfterKthElement(head, 2, 10);
 print(head);
 return 0;
}