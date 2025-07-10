// TC: O(N)

#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &vect)
{
 int s = vect.size();
 int largest = vect[0];

 for (int i = 0; i < s; i++)
 {
  if (vect[i] > largest)
  {
   largest = vect[i];
  }
 }
 return largest;
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

 cout << largestElement(v) << endl;
 return 0;
}