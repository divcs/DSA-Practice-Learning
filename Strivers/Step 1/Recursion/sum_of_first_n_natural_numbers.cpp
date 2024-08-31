// 4 methods: for/while loop, using formula n*(n+1)/2, using recursion: parameterized or function

// using loop
#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 int sum = 0;
 for (int i = 1; i <= n; i++)
 {
  sum += i;
 }
 cout << "The sum of natural numbers upto " << n << " is : " << sum << endl;

 return 0;
}

// using formula: n(n+1)/2

// using parameterized approach

#include <iostream>
using namespace std;

int displaySum(int i, int sum)
{
 if (i < 1)
 {
  cout << sum << endl;
  return sum;
 }
 displaySum(i - 1, sum + i);
}

int main()
{
 int n, sum = 0;
 cin >> n;
 int result = displaySum(n, sum);
 cout << "The sum of natural numbers upto " << i << " is : " << result << endl;

 return 0;
}

// using approach: n+sum(n-1)

#include <iostream>
using namespace std;

int sumN(int i)
{
 if (i == 0)
 {
  return 0;
 }
 return i + sumN(i - 1);
}

int main()
{
 int n;
 cin >> n;
 cout << "The sum of natural numbers upto " << n << " is : " << sumN(n);

 return 0;
}

// using recursion

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
