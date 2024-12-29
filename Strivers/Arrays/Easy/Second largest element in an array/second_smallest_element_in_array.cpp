#include <iostream>
#include <vector>
using namespace std;

int sSmallestElement(vector<int> &vect)
{
 int s = vect.size();
 int smallest = vect[0];
 int ssmalest = INT_MAX;

 for (int i = 0; i < s; i++)
 {
  if (vect[i] < smallest)
  {
   ssmalest = smallest;
   smallest = vect[i];
  }
  else if (vect[i] < ssmalest && vect[i] != smallest)
  {
   ssmalest = vect[i];
  }
 }
 return ssmalest;
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
 cout << sSmallestElement(v) << endl;

 return 0;
}