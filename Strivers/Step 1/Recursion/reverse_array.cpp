// Method 1: using an extra array
// #include <iostream>
// using namespace std;

// void displayArray(int size, int arr[])
// {
//  cout << "The reversed array is: ";
//  for (int i = 0; i < size; i++)
//  {
//   cout << arr[i] << " ";
//  }
//  cout << endl;
// }

// void reverseArray(int size, int arr[], int rev_arr[])
// {
//  if (size == 0)
//  {
//   return;
//  }
//  else
//  {
//   for (int i = size - 1; i >= 0; i--)
//   {
//    rev_arr[size - i - 1] = arr[i];
//   }
//  }
// }

// int main()
// {
//  int n;
//  cout << "Enter the size of array:" << endl;
//  cin >> n;

//  int array[n]; // Declare the array after reading size
//  cout << "Enter the elements of array:" << endl;
//  for (int i = 0; i < n; i++)
//  {
//   cin >> array[i];
//  }

//  int rev_arr[n];                  // Declare the reversed array
//  reverseArray(n, array, rev_arr); // Pass the reversed array to the function
//  displayArray(n, rev_arr);        // Display the reversed array

//  return 0;
// }

// Method 2: Without using an extra array

#include <iostream>
using namespace std;

void printArray(int n, int arr[])
{
 cout << "The reversed array is: " << endl;
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
}

void reverseArray(int n, int arr[])
{
 int left = 0;
 int right = n - 1;

 while (left < right)
 {
  swap(arr[left], arr[right]);
  left++, right--;
 }
 printArray(n, arr);
}

int main()
{
 int n;
 cin >> n;

 int arr[n];
 cout << "Enter the elements of array:" << endl;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 reverseArray(n, arr);

 return 0;
}

// Method 3: Recursion

#include <iostream>
using namespace std;

void displayArray(int arr[], int n)
{
 cout << "The reversed array is: " << " " << endl;
 for (int i = 0; i < n; i++)
 {
  cout << arr[i];
 }
}

void reverseArray(int arr[], int start, int end)
{
 if (start < end)
 {
  swap(arr[start], arr[end]);
  reverseArray(arr, start + 1, end - 1);
 }
}

int main()
{
 int n;
 cout << "Enter the size of array:" << endl;
 cin >> n;
 int arr[n];
 cout << "Enter the elements of array:" << endl;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 reverseArray(arr, 0, n - 1);
 displayArray(arr, n);
 return 0;
}

// Method 4: using inbuilt function of 'reverse' provided in algorithm header file in cpp
#include <iostream>
#include <algorithm>

using namespace std;
// Function to print array
void printArray(int arr[], int n)
{
 cout << "The reversed array is:- " << endl;
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
}
// Reverse array using library function
void reverseArray(int arr[], int n)
{
 // Reversing elements from index 0 to n-1
 reverse(arr, arr + n);
}
int main()
{
 int n = 5;
 int arr[] = {5, 4, 3, 2, 1};
 reverseArray(arr, n);
 printArray(arr, n);
 return 0;
}