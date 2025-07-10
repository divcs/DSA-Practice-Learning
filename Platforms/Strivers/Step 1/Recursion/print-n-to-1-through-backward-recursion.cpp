#include <iostream>
using namespace std;

void printNum(int i, int n)
{
 if (i < 0)
  return;
 cout << i << endl;
 printNum(i - 1, n);
}

int main()
{
 int n, i;
 cout << "Enter the number from where numbers are to be printed:";
 cin >> n;

 printNum(i = n, n);
 // Your code goes here

 return 0;
}