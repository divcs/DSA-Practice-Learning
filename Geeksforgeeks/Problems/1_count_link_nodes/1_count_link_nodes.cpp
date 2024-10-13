// Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.
// Examples :
// Input: LinkedList : 1->2->3->4->5Output: 5 Explanation: Count of nodes in the linked list is 5, which is its length.
// Input: LinkedList : 2->4->6->7->5->1->0 Output: 7 Explanation: Count of nodes in the linked list is 7. Hence, the output is 7.
// Expected Time Complexity: O(n)Expected Auxilliary Space: O(1)

// Constraints:1 <= number of nodes <= 1051 <= node->data <= 103

#include <iostream>
using namespace std;

// Define the structure for a linked list node
struct Node
{
 int data;
 struct Node *next;

 // Constructor to initialize the node
 Node(int x)
 {
  data = x;
  next = NULL;
 }
};

class Solution
{
public:
 // Function to count the number of nodes in the linked list
 int getCount(struct Node *head)
 {
  int count = 0;
  struct Node *current = head;

  // Traverse through the linked list
  while (current != NULL)
  {
   count++;                 // Increment count for each node
   current = current->next; // Move to the next node
  }

  return count; // Return the final count
 }
};

// Helper function to create a linked list for demonstration
void append(Node **head_ref, int new_data)
{
 Node *new_node = new Node(new_data);
 Node *last = *head_ref;

 if (*head_ref == NULL)
 {
  *head_ref = new_node;
  return;
 }

 while (last->next != NULL)
 {
  last = last->next;
 }

 last->next = new_node;
}

int main()
{
 Node *head = NULL;

 // Example linked list: 1->2->3->4->5
 append(&head, 1);
 append(&head, 2);
 append(&head, 3);
 append(&head, 4);
 append(&head, 5);

 Solution obj;
 cout << "Length of the linked list is: " << obj.getCount(head) << endl;

 return 0;
}
