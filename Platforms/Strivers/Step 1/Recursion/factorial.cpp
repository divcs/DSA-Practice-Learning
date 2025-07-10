// Method 1: Recursion

#include <iostream>
using namespace std;

int factorial(int n)
{

 if (n == 0)
 {
  return 1;
 }
 return n * factorial(n - 1);
}

int main()
{
 int n;
 cin >> n;

 cout << "Factorial of " << n << " is: " << factorial(n) << endl;

 return 0;
}

// Method 2: For loop

#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int fact = 1;
 for (int i = 1; i <= n; i++)
 {
  fact = fact * i;
 }
 cout << "Factorial of " << n << " is: " << fact;

 return 0;
}

// Method 3: Recursion
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
