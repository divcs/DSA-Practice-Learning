#include <iostream>
using namespace std;

void printNum(int i, int n)
{
 if (i > n)
  return;
 cout << i << endl;
 printNum(i + 1, n);
}

int main()
{
 int n, i;
 cout << "Enter the number upto which numbers are to be printed:";
 cin >> n;

 printNum(i = 1, n);
 // Your code goes here

 return 0;
}