#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int row = 1;

 while (row <= n)
 {
  int spaces = 1;

  while (spaces <= row - 1)
  {
   cout << " ";
   spaces = spaces + 1;
  }
  int col = 1;
  while (col <= n - row + 1)
  {
   cout << row;
   col = col + 1;
  }

  cout << endl;
  row = row + 1;
 }
 return 0;
}

// 1111
//  222
//   33
//    4