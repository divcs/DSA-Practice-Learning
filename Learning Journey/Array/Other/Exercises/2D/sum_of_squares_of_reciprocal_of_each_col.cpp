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
   if (matrix[j][i] != 0) // Avoid division by zero
   {
    double reciprocal = 1.0 / matrix[i][j]; // Reciprocal of the element
    res += reciprocal * reciprocal;         // Square and add to the sum
   }
   else
   {
    cout << "Error: Division by zero encountered in row " << j << endl;
    return 1;
   }
  }
  
  cout << "Result of " << i << "th col: " << res << endl;
 }
 return 0;
}