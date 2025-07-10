// TC: O(N log N)+O(N) for sorting and then looping over
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secLargestElement(vector<int> &vect)
{
 int s = vect.size();
 int secl = -1;

 sort(vect.begin(), vect.end());
 int largest = vect[s - 1];

 for (int i = s - 2; i >= 0; i--)
 {
  if (vect[i] != largest)
  {
   secl = vect[i];
   break;
  }
 }
 return secl;
}
int main()
{
 int size;
 cin >> size;
 vector<int> v(size);
 for (int i = 0; i < size; i++)
 {
  cin >> v[i];
 }

 cout << secLargestElement(v) << endl;
 return 0;
}