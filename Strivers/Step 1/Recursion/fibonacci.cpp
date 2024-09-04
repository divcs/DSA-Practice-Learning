#include <iostream>
using namespace std;

void fibonacci(int n)
{
 if (n <= 0)
 {
  cout << "No elements in the Fibonacci series." << endl;
  return;
 }
 else if (n == 1)
 {
  cout << "Elements of Fibonacci series are: 0" << endl;
  return;
 }
 else if (n == 2)
 {
  cout << "Elements of Fibonacci series are: 0 1" << endl;
  return;
 }

 int arr[n];
 arr[0] = 0;
 arr[1] = 1;

 cout << "Elements of Fibonacci series are: " << arr[0] << " " << arr[1] << " ";

 for (int i = 2; i < n; i++)
 {
  arr[i] = arr[i - 1] + arr[i - 2];
  cout << arr[i] << " ";
 }
 cout << endl;
}

int main()
{
 int size;
 cout << "Enter the size of the array: ";
 cin >> size;

 fibonacci(size);
 return 0;
}

// fibonacci n'th term

#include <bits/stdc++.h>
using namespace std;

int fibonacciNTerm(int N)
{

 // Base Condition.
 if (N <= 1)
 {
  return N;
 }

 // Problem broken down into 2 functional calls
 // and their results combined and returned.
 int last = fibonacciNTerm(N - 1);
 int slast = fibonacciNTerm(N - 2);

 return last + slast;
}

int main()
{

 // Here, let’s take the value of N to be 4.
 int N = 4;
 cout << fibonacciNTerm(N) << endl;
 return 0;
}