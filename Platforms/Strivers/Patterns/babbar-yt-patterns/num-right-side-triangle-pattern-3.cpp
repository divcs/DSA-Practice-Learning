#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int row = 1;
 while (row <= n)
 {
  int space = 1;
  while (space <= row - 1)
  {
   cout << " ";
   space = space + 1;
  }
  int col = 1;
  while (col <= n - row + 1)
  {
   int value = row + col - 1;
   cout << value;
   // value = value + 1;
   col = col + 1;
  }
  cout << endl;
  row = row + 1;
 }

 return 0;
}

// 1234
//  234
//   34
//    4