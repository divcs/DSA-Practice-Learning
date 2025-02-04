#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int rows, cols;
 cin >> rows;
 cin >> cols;

 int matrix[rows][cols];
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   cin >> matrix[i][j];
  }
 }
 // Compute result
 for (int i = 0; i < rows; i++)
 {
  double res = 0.0; // Reset result for each row
  for (int j = 0; j < cols; j++)
  {
   if (matrix[i][j] != 0) // Avoid division by zero
   {
    res += pow((1.0 / matrix[i][j]), 2);
   }
   else
   {
    cout << "Error: Division by zero encountered in row " << i << endl;
    return 1;
   }
  }
  cout << "Result of " << i << "th row: " << res << endl;
 }
 return 0;
}