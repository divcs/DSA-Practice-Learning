#include <iostream>
#include <stack>
#include <climits>
using namespace std;

int maxEl(stack<int> s)
{
 int max = INT_MIN;
 while (!s.empty())
 {
  int topVal = s.top();
  s.pop();

  if (topVal > max)
  {
   max = topVal;
  }
 }
 return max;
}

int minEl(stack<int> s)
{
 int min = INT_MAX;

 while (!s.empty())
 {
  int topVal = s.top();
  s.pop();

  if (topVal < min)
  {
   min = topVal;
  }
 }
 return min;
}

void traverse(stack<int> s)
{

 while (!s.empty())
 {
  cout << s.top() << " ";
  s.pop();
 }
}

int main()
{
 stack<int> st;

 st.push(10);
 st.push(2);
 st.push(32);
 st.push(4);
 st.push(5);

 // cout << maxEl(st);
 // cout << minEl(st);
 traverse(st);

 return 0;
}