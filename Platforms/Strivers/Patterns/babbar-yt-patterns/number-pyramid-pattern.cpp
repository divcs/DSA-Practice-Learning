#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int row = 1;

 while (row <= n)
 {
  // Print leading spaces: 1st triangle
  int spaces = n - row;
  while (spaces)
  {
   cout << " ";
   spaces = spaces - 1;
  }

  // Print increasing values: 2nd triangle
  int col = 1;

  while (col <= row)
  {
   cout << col;
   col++;
  }

  // Print decreasing values: 3rd triangle
  int start = row - 1;

  while (start)
  {
   cout << start;
   start--;
  }

  // Move to the next line after each row is printed
  cout << endl;
  row = row + 1;
 }

 return 0;
}

// METHOD 2

// #include <iostream>
// using namespace std;

// int main()
// {
//  int n;
//  cin >> n;

//  int row = 1;

//  while (row <= n)
//  {
//   // Print leading spaces
//   int spaces = 1;
//   while (spaces <= n - row)
//   {
//    cout << " ";
//    spaces = spaces + 1;
//   }

//   // Print increasing values
//   int value = 1;
//   int col = 1;

//   while (col <= row)
//   {
//    cout << value;
//    value++;
//    col++;
//   }

//   // Print decreasing values
//   value = row - 1; // reset value for decreasing part
//   col = 1;         // reset column for decreasing part

//   while (col < row)
//   {
//    cout << value;
//    value--;
//    col++;
//   }

//   // Move to the next line after each row is printed
//   cout << endl;
//   row = row + 1;
//  }

//  return 0;
// }

