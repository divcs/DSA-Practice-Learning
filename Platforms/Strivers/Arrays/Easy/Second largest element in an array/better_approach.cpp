// TC: O(2N)= O(N)+O(N) for two loops,
// one for finding largest and other for finding second largest

#include <iostream>
#include <vector>

using namespace std;

int secLargestElement(vector<int> &vect)
{
 int secl = -1;
 int seclIndex = 0;
 int largest = vect[0];
 int s = vect.size();

 // find largest element
 for (int i = 1; i < s; i++)
 {
  if (vect[i] > largest)
  {
   largest = vect[i];
  }
 }

 // finding second largest element
 for (int i = 0; i < s; i++)
 {
  if (vect[i] > secl && vect[i] != largest)
  {
   // seclIndex = i;
   secl = vect[i];
  }
 }
 // cout << "index of secl:" << seclIndex << endl;
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