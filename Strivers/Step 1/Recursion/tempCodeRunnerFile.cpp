#include <iostream>
using namespace std;

int factorial(int i)
{

 if (i == 0)
 {
  return 1;
 }
 return i * factorial(i - 1);
}

int main()
{
 int n;
 cin >> n;

 cout << "Factorial of " << n << " is: " << factorial(n) << endl;

 return 0;
}