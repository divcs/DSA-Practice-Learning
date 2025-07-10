#include <bits/stdc++.h>
#include <queue>
int kthSmallest(vector<int> &v, int n, int k)
{

 priority_queue<int> maxHeap;

 for (int i = 0; i < k; i++)
 {
  maxHeap.push(v[i]);
 }

 for (int i = k; i < n; i++)
 {
  if (v[i] < maxHeap.top())
  {
   maxHeap.pop();
   maxHeap.push(v[i]);
  }
 }
 return maxHeap.top();
}

// not optimal

#include <bits/stdc++.h>
#include <queue>
int kthSmallest(vector<int> &v, int n, int k)
{

 priority_queue<int, vector<int>, greater<int>> minHeap(v.begin(), v.end());

 for (int i = 1; i < k; i++)
 {
  minHeap.pop();
 }
 return minHeap.top();
}
