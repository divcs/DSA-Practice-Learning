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

Node *InsertAfterNode(Node *node, int val)
{
}
int main()
{
 vector<int> arr = {2, 5, 6, 8};
 Node *head = convertArrToDLL(arr);
 head = InsertAfterNode(head->next, 20);
 print(head);
 return 0;
}