#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int row = 1;

 char c = 'A';
 while (row <= n)
 {
  int col = 1;
  while (col <= row)
  {

   cout << c;
   col = col + 1;
   c = c + 1;
  }

  cout << endl;
  row = row + 1;
 }
 return 0;
}
