// Method 1: with third variable

#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int row = 1;
 while (row <= n)
 {
  int col = 1;
  int value = row; // since every first col value of each row is the same as row value
  while (col <= row)
  {
   cout << row << " ";
   value = value + 1;
   col = col + 1;
  }

  cout << endl;
  row = row + 1;
 }
 return 0;
}

// Method 2: without third variable
#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int row = 1;
 while (row <= n)
 {
  // The starting value for each row is the same as the row number
  int value = row;

  // Print out the numbers for the current row
  while (value < row + row) // Loop from `value` to `row + row - 1` we are increasing the column values until it is less than twice of row number
  {
   cout << value << " ";
   value = value + 1; // Increment the value directly
  }

  cout << endl;  // Print a new line after each row
  row = row + 1; // Move to the next row
 }
 return 0;
}