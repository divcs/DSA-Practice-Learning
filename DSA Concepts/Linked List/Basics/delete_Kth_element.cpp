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

Node *removeK(Node *head, int k)
{
 if (head == NULL)
  return head;
 if (k == 1)
 {
  Node *temp = head;
  head = head->next;
  free(temp);
  return head;
 }

 int count = 0;
 Node *temp = head;
 Node *prev = NULL;
 while (temp != NULL)
 {
  count++;
  if (count == k)
  {
   prev->next = prev->next->next;
   free(temp);
   break;
  }
  prev = temp;
  temp = temp->next;
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
int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToLL(arr);

 head = removeK(head, 3);
 print(head);
 return 0;
}