#include <iostream>
#include <set>

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

 // interchange
 cout << "After interchanging: ";
 for (int i = size - 1; i >= 0; i--)
 {
  cout << arr[i] << " ";
 }
 return 0;
}