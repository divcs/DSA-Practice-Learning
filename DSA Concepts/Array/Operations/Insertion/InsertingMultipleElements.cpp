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

 int totalItemsToInsert;
 cin >> totalItemsToInsert;

 int InsertItemsArray[totalItemsToInsert];

 for (int i = 0; i < totalItemsToInsert; i++)
 {
  cin >> InsertItemsArray[i];
 }

 for (int i = size - 1; i >= pos; i--)
 {
  arr[i + 1] = arr[i];
 }
 arr[pos] = item;
 size++;

 cout << "New array is:";
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }

 return 0;
}