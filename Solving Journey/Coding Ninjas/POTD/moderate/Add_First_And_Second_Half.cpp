#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
string getNumber(Node *head)
{
 string num = "";
 while (head)
 {
  num += (head->data + '0');
  head = head->next;
 }
 return num;
}

string removeLeadingZeroes(string num)
{
 int i = 0;
 while (i < num.size() - 1 && num[i] == '0')
  i++;
 return num.substr(i);
}

string addStrings(string num1, string num2)
{
 string result = "";
 int carry = 0, i = num1.size() - 1, j = num2.size() - 1;

 while (i >= 0 || j >= 0 || carry)
 {
  int sum = carry;
  if (i >= 0)
   sum += num1[i--] - '0';
  if (j >= 0)
   sum += num2[j--] - '0';
  result.push_back(sum % 10 + '0');
  carry = sum / 10;
 }
 reverse(result.begin(), result.end());
 return removeLeadingZeroes(result);
}

Node *createLinkedList(string num)
{
 if (num == "0")
  return new Node(0);

 Node *head = new Node(num[0] - '0');
 Node *tail = head;

 for (int i = 1; i < num.size(); i++)
 {
  tail->next = new Node(num[i] - '0');
  tail = tail->next;
 }
 return head;
}

Node *addFirstAndSecondHalf(Node *head)
{
 // Write your code here.
 if (!head || !head->next)
  return head;

 Node *slow = head, *fast = head, *prev = nullptr;

 while (fast && fast->next)
 {
  prev = slow;
  slow = slow->next;
  fast = fast->next->next;
 }
 if (fast)
 {
  prev = slow;
  slow = slow->next;
 }
 if (prev)
  prev->next = nullptr;

 Node *firstHalf = head;
 Node *secondHalf = slow;

 string num1 = getNumber(firstHalf);
 string num2 = getNumber(secondHalf);

 string sum = addStrings(num1, num2);

 return createLinkedList(sum);
}
