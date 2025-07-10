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
  while (col <= n)
  {
   char c = 'A' + row + col - 2;

   cout << c;
   col = col + 1;
   c = c + 1;
  }

  cout << endl;
  row = row + 1;
 }
 return 0;
}

// Method 2 : easy
// same as right tri 4 by finding start var through formula then forcol increment

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
  while (col <= n)
  {
   char c = 'A' + row + col - 2;

   cout << c;
   col = col + 1;
   c = c + 1;
  }

  cout << endl;
  row = row + 1;
 }
 return 0;
}