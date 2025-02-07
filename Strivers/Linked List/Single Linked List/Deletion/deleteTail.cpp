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

int lengthOfLL(Node *head)
{
 int count = 0;

 Node *temp = head;
 while (temp)
 {
  // cout << temp->data << " ";
  temp = temp->next;
  count++;
 }
 return count;
}
int checkIfPresent(Node *head, int val)
{
 Node *temp = head;
 while (temp)
 {
  // cout << temp->data << " ";
  if (temp->data == val)
   return 1;
  temp = temp->next;
 }
 return 0;
}
void print(Node *head)
{
 while (head != NULL)
 {
  cout << head->data << " ";
  head = head->next;
 }
}
Node *removeHead(Node *head)
{
 if (head == NULL)
  return head;
 Node *temp = head;
 head = head->next;
 delete temp; // or free temp
 return head;
}
Node *removeTail(Node *head)
{
 if (head == NULL || head->next == NULL)
  return NULL;

 Node *temp = head;
 while (temp->next->next != NULL)
 {
  temp = temp->next;
 }
 delete temp->next;
 temp->next = nullptr;
 return head;
}
int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToLL(arr);
 // cout << lengthOfLL(head);
 // cout << checkIfPresent(head, 15);
 head = removeTail(head);
 print(head);
 return 0;
}