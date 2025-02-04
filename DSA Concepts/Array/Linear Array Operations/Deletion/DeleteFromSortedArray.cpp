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
 int item;
 cout << "Enter element to delete:";
 cin >> item;

 // deletion code
 int i = 0;
 while (arr[i] > item)
 {
  arr[i - 1] = arr[i];
  i++;
 }
 size--;

 cout << "New array is:";
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
 return 0;
}