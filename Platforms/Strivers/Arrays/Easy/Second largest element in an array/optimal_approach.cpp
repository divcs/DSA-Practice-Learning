// TC: O(N)

#include <iostream>
#include <vector>
using namespace std;

int secLargestElement(vector<int> &vect)
{
 int s = vect.size();
 int largest = vect[0];
 int secl = -1;

 for (int i = 0; i < s; i++)
 {
  if (vect[i] > largest)
  {
   secl = largest;
   largest = vect[i];
  }
  else if (vect[i] < largest && vect[i] > secl)
  {
   secl = vect[i];
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