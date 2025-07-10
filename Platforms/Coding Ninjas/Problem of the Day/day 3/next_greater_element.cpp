#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr, int n)
{
 vector<int> newArr(n, -1); // Initialize with -1

 for (int i = 0; i < n; i++)
 {
  for (int j = i + 1; j < n; j++)
  {
   if (arr[j] > arr[i])
   {
    newArr[i] = arr[j]; // Store the first greater element
    break;              // Move to the next element
   }
  }
 }

 return newArr;
}

int main()
{
 int T;
 cin >> T; // Number of test cases

 while (T--)
 {
  int N;
  cin >> N;
  vector<int> arr(N);

  for (int i = 0; i < N; i++)
  {
   cin >> arr[i];
  }

  vector<int> result = nextGreaterElement(arr, N);
  for (int num : result)
  {
   cout << num << " ";
  }
  cout << endl;
 }

 return 0;
}

//

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr, int n)
{
 vector<int> nge(n, -1); // Initialize result with -1
 stack<int> st;          // Stack to store elements

 for (int i = n - 1; i >= 0; i--)
 { // Traverse from right to left
  while (!st.empty() && st.top() <= arr[i])
  {
   st.pop(); // Remove smaller elements
  }

  if (!st.empty())
  {
   nge[i] = st.top(); // Assign NGE
  }

  st.push(arr[i]); // Push current element to stack
 }

 return nge;
}

int main()
{
 int T;
 cin >> T;

 while (T--)
 {
  int N;
  cin >> N;
  vector<int> arr(N);

  for (int i = 0; i < N; i++)
  {
   cin >> arr[i];
  }

  vector<int> result = nextGreaterElement(arr, N);
  for (int num : result)
  {
   cout << num << " ";
  }
  cout << endl;
 }

 return 0;
}
