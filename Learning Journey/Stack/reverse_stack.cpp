#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &st)
{
 stack<int> tempStack;

 while (!st.empty())
 {
  tempStack.push(st.top());
  st.pop();
 }

 st = tempStack;
}

void printStack(stack<int> st)
{
 while (!st.empty())
 {
  cout << st.top() << " ";
  st.pop();
 }
 cout << endl;
}

int main()
{
 stack<int> st;
 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);

 cout << "Original Stack: ";
 printStack(st);

 reverseStack(st);

 cout << "Reversed Stack: ";
 printStack(st);

 return 0;
}
