#include <iostream>
using namespace std;

int main()
{
 int n;
 cout << "Enter the number of rows:";
 cin >> n;

 int i = 1;
 while (i <= n)
 {
  // cout<<i<<endl;

  int j = 1;
  while (j <= n)
  {
   cout << i;
   j = j + 1;
  }
  cout << endl;
  i = i + 1;
 }

 return 0;
}
