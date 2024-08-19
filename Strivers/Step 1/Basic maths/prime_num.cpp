#include <iostream>
using namespace std;

int prime(int num)
{
 int count = 0;
 for (int i = 1; i <= num; i++)
 {
  if (num % i == 0)
  {
   count++;
  }
 }
 if (count == 2)
 {
  return true;
 }
 else
 {
  return false;
 }
}

int main()
{
 int num;
 cout << "Enter the number: ";
 cin >> num;

 bool isPrime = prime(num);
 if (isPrime)
 {
  cout << num << " is a prime number." << endl;
 }
 else
 {
  cout << num << " is not a prime number." << endl;
 }

 return 0;
}