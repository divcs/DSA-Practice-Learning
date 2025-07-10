/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
 ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
 {
  // Create a dummy node to act as the head of the merged list
  ListNode dummy(0);
  ListNode *tail = &dummy;

  // While both lists are not empty
  while (list1 != nullptr && list2 != nullptr)
  {
   if (list1->val <= list2->val)
   {
    tail->next = list1;  // Append list1 node to merged list
    list1 = list1->next; // Move to the next node in list1
   }
   else
   {
    tail->next = list2;  // Append list2 node to merged list
    list2 = list2->next; // Move to the next node in list2
   }
   tail = tail->next; // Update the tail pointer
  }

  // If either list is not empty, link the remaining elements
  if (list1 != nullptr)
  {
   tail->next = list1;
  }
  else if (list2 != nullptr)
  {
   tail->next = list2;
  }

  // The merged list is next to the dummy node
  return dummy.next;
 }
};

// how to use
#include <iostream>

int main()
{
 // Example usage
 ListNode *list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
 ListNode *list2 = new ListNode(1, new ListNode(3, new ListNode(4)));

 Solution solution;
 ListNode *mergedList = solution.mergeTwoLists(list1, list2);

 // Print the merged linked list
 while (mergedList != nullptr)
 {
  std::cout << mergedList->val << " ";
  mergedList = mergedList->next;
 }
 std::cout << std::endl;

 // Clean up the allocated memory (not shown here)
 return 0;
}