#include <iostream>
using namespace std;

int main()
{

 int size;
 cout << "Enter size of array:";
 cin >> size;
 int arr[size];

 cout << "Array elements: ";
 for (int i = 0; i < size; i++)
 {
  cin >> arr[i];
 }

 // int pos;
 // cout << "Enter position of new element: ";
 // cin >> pos;
 int item;
 cout << "Enter new item to insert: ";
 cin >> item;

 // insertion code

 int i = size - 1;
 while (arr[i] > item)
 {
  arr[i + 1] = arr[i];
  i--;
 }
 arr[i + 1] = item;
 size++;

 cout << "New array is:";
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }

 return 0;
}