/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
 int size;
 cin >> size;
 int arr[size];

 for (int i = 0; i < size; i++)
 {
  cin >> arr[i];
 }

 int searchItem;
 int pos = -1;
 cin >> searchItem;

 int i = 0;
 while (i <= size - 1)
 {
  if (arr[i] == searchItem)
  {
   pos = i;
   cout << i << endl;
   break;
  }
  i = i + 1;
 }
 if (pos == -1)
 {
  cout << "Element " << searchItem << " not found" << endl;
 }
 else
 {
  cout << "Element " << searchItem << " found at index" << pos << endl;
 }
 return 0;
}