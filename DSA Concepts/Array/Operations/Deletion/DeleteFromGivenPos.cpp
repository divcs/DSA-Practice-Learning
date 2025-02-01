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

 int pos;
 cout << "Enter position of element to delete: ";
 cin >> pos;

 for (int i = pos; i <= size - 1; i++)
 {
  arr[i] = arr[i + 1];
 }
 size--;

 cout << "New array is:";
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
 return 0;
}