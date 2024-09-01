#include <iostream>
using namespace std;

void displayArray(int size, int arr[])
{
 cout << "The reversed array is: ";
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
}

void reverseArray(int size, int arr[], int rev_arr[])
{
 if (size == 0)
 {
  return;
 }
 else
 {
  for (int i = size - 1; i >= 0; i--)
  {
   rev_arr[size - i - 1] = arr[i];
  }
 }
}

int main()
{
 int n;
 cout << "Enter the size of array:" << endl;
 cin >> n;

 int array[n]; // Declare the array after reading size
 cout << "Enter the elements of array:" << endl;
 for (int i = 0; i < n; i++)
 {
  cin >> array[i];
 }

 int rev_arr[n];                  // Declare the reversed array
 reverseArray(n, array, rev_arr); // Pass the reversed array to the function
 displayArray(n, rev_arr);        // Display the reversed array

 return 0;
}