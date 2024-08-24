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
   cout << value;
   value = value + 1;
   col = col + 1;
  }

  cout << endl;
  row = row + 1;
 }
 return 0;
}