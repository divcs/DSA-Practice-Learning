// optimized

class Solution
{
public:
 string clearDigits(string s)
 {
  string ans;
  for (char c : s)
  {
   if (c >= '0' && c <= '9')
   {
    ans.pop_back();
   }
   else
   {
    ans.push_back(c);
   }
  }
  return ans;
 }
};

// using stack

class Solution
{
public:
 string clearDigits(string s)
 {
  stack<char> st;

  for (char ch : s)
  {
   if (isdigit(ch))
   {
    if (!st.empty())
    {
     st.pop(); // Remove the closest left non-digit character
    }
   }
   else
   {
    st.push(ch);
   }
  }

  // Construct the resulting string
  string result;
  while (!st.empty())
  {
   result = st.top() + result;
   st.pop();
  }

  return result;
 }
};