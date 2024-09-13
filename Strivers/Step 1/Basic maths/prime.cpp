// #include <iostream>
// using namespace std;

// int check_prime(int num)
// {
//  int count = 0;
//  for (int i = 1; i <= num; i++)
//  {
//   if (num % i == 0)
//   {
//    count++;
//   }
//  }
//  if (count == 2)
//   return true;
//  else
//   return false;
// }

// int main()
// {

//  int num;
//  cout << "Enter the number to check for prime: ";
//  cin >> num;

//  if (check_prime(num))
//   cout << num << " is a prime number." << endl;
//  else
//   cout << num << " is not a prime number." << endl;

//  return 0;
// }
#include <iostream>
using namespace std;
int prime_check(int n)
{
  int count = 0;
  int i = 1;

  while (i > 0)
  {
    if (n % i == 0)
    {
      count++;
    }
    i++;
  }
  if (count == 2)
  {
    return true;
  }
  else
    return false;
}
int main()
{
  int num;
  cin >> num;

  if (prime_check(num))
  {
    cout << num << "is a prime num" << endl;
  }
  else
    cout << num << "is not a prime num" << endl;
}