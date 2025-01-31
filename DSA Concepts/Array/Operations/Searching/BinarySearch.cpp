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
 cin >> searchItem;

 int left = 0;
 int right = size - 1;
 int mid;

 int pos = -1;

 while (left <= right)
 {
  mid = (left + right) / 2;
  if (arr[mid] == searchItem)
  {
   pos = mid;
   break;
  }
  else if (arr[mid] < searchItem)
  {
   left = mid + 1;
  }
  else
  {
   right = mid - 1;
  }
 }

 if (pos == -1)
 {
  cout << "Element not found";
 }
 else
 {
  cout << "Element found at index" << pos;
 }
 return 0;
}