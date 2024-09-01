// Method 1
#include <iostream>
using namespace std;

int factorial(int i, int fact)
{

 if (i == 0)
 {
  return 1;
 }
 return i * factorial(i - 1, fact * i);
}

int main()
{
 int n;
 cin >> n;

 cout << "Factorial of " << n << " is: " << factorial(n, 1) << endl;

 return 0;
}

// Method 2

#include <iostream>
using namespace std;

int main()
{
 // Your code goes here

 return 0;
}