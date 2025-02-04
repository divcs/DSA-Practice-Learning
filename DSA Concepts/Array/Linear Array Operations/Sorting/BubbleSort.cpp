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
 int temp;
 // in one pass, 2 elements are compared so for 10 elements, 5 passes will be required in the first loop
 for (int k = 0; k < size; k++)
 {
  for (int i = 0; i < size - k - 1; i++)
  {
   if (arr[i] > arr[i + 1])
   {
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
   }
  }
 }
 cout << "Sorted array is: ";
 for (int i = 0; i <= size - 1; i++)
 {
  cout << arr[i] << " ";
 }

 return 0;
}