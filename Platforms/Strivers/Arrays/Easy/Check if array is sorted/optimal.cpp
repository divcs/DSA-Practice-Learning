#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &vect)
{
 int s = vect.size();

 if (s <= 1)
  return true;

 for (int i = 1; i < s; i++)
 {
  if (vect[i] < vect[i - 1])
  {
   return false; // array is not sorted
  }
 }
 return true; // array is sorted if no pair of adjacent elements are in decreasing order  // or if all elements are equal in size
}

int main()
{
 int size;
 cin >> size;

 vector<int> vect(size);
 for (int i = 0; i < size; i++)
 {
  cin >> vect[i];
 }
 // if u want to use while loop, for input use this one
 // Corrected while loop: gives YES for sorted array

 // int index = 0;
 // while (index < size)
 // {
 //  cin >> vect[index];
 //  index++;
 // }

 // not this one
 // incorrect while loop here:gives NO for sorted array
 // while (size--)
 // {
 //  cin >> vect[size];
 // }
 cout << (isSorted(vect) ? "YES" : "NO") << endl;
 return 0;
}