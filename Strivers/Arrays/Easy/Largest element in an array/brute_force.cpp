// TC: O(N log N) SC: O(1)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestElement(vector<int> &vect)
{
 int s = vect.size();
 sort(vect.begin(), vect.end());
 return vect[s - 1];
}

int main()
{
 int size;
 cin >> size;
 vector<int> v(size);
 while (size--)
 {
  cin >> v[size];
 }

 cout << largestElement(v);
 return 0;
}