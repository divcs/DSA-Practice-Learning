#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
 int sum = 0;
 // int ld = 0;
 while (n > 0)
 {
  int ld = n % 10;
  sum += ld;
  n = n / 10;
 }
 return sum;
}

int main()
{
 int n;
 cin >> n;

 int sum = sumOfDigits(n);
 cout << "The sum of digits is: " << sum << endl;

 return 0;
}