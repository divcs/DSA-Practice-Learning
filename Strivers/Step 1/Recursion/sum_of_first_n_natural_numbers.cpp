// 4 methods: for/while loop, using formula n*(n+1)/2, using recursion: parameterized or function

#include <iostream>
using namespace std;

int sumOfNNumbers(int i, int n)
{
 if (i > n)
  return 0;                          // Base case
 return i + sumOfNNumbers(i + 1, n); // Recursion with accumulation
}

int main()
{
 int n;
 cout << "Enter the number of natural numbers you want to sum: ";
 cin >> n;

 int sum = sumOfNNumbers(1, n); // Get the sum
 cout << "The sum of first " << n << " natural numbers is: " << sum << endl;

 return 0;
}