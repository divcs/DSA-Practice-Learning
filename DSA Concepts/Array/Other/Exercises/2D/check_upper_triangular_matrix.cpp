#include <iostream>
using namespace std;

int main()
{
 int rows, cols;
 cin >> rows >> cols;

 // A triangular matrix must be square
 if (rows != cols)
 {
  cout << "The matrix is not square, so it cannot be triangular." << endl;
  return 0;
 }

 int matrix[rows][cols];

 // Input matrix elements
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   cin >> matrix[i][j];
  }
 }

 bool isUpper = true, isLower = true;

 // Check for upper and lower triangular properties
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   if (i > j && matrix[i][j] != 0) // Below diagonal should be 0 for upper triangular
   {
    isUpper = false;
   }
   if (i < j && matrix[i][j] != 0) // Above diagonal should be 0 for lower triangular
   {
    isLower = false;
   }
  }
 }

 // Print results
 if (isUpper && isLower)
 {
  cout << "The matrix is both upper and lower triangular (diagonal matrix)." << endl;
 }
 else if (isUpper)
 {
  cout << "The matrix is upper triangular." << endl;
 }
 else if (isLower)
 {
  cout << "The matrix is lower triangular." << endl;
 }
 else
 {
  cout << "The matrix is neither upper nor lower triangular." << endl;
 }

 return 0;
}
