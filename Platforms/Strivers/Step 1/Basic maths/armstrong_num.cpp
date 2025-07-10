#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num)
{
 // Calculate the number of digits in the given number
 int k = to_string(num).length();
 // Initialize the sum of digits raised to the power of k to 0
 int sum = 0;
 // Copy the value of the input number to a temporary variable n
 int n = num;

 // Iterate through each digit of the number
 while (n > 0)
 {
  // Extract the last digit of the number
  int ld = n % 10;
  // Add the digit raised to the power of k to the sum

  sum += pow(ld, k);

  // -------------------------------------
  // use either the above line for power or calculate by using loop as shown below

  // int pow_result = 1;
  // for (int i = 0; i < k; i++)
  // {
  //  pow_result *= ld; // Multiply ld by itself k times
  // }
  // sum += pow_result;

  // ----------------------------

  // Remove the last digit from the number
  n = n / 10;
 }
 // Check if the sum of digits raised to the power of k equals the original number
 return sum == num;
}

int main()
{
 int number;
 cout << "Enter a number to check if it's an Armstrong number: ";
 cin >> number;

 if (isArmstrong(number))
 {
  cout << number << " is an Armstrong number." << endl;
 }
 else
 {
  cout << number << " is not an Armstrong number." << endl;
 }
 return 0;
}