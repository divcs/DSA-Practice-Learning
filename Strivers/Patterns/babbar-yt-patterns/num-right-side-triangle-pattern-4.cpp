#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int row = 1;
 int value = 1;
 while (row <= n)
 {
  int space = 1;
  while (space <= n - row)
  {
   cout << " ";
   space = space + 1;
  }
  int col = 1;
  while (col <= row)
  {
   cout << value;
   value = value + 1;
   col = col + 1;
  }
  cout << endl;
  row = row + 1;
 }

 return 0;
}

//     1
//    23
//   456
//  78910