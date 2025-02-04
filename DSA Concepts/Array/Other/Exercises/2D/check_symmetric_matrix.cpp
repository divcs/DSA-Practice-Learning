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
 bool symmetric = true;

 // Check for upper and lower triangular properties
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   if (matrix[i][j] != matrix[j][i])
   {
    symmetric = false;
   }
  }
 }

 if (symmetric)
 {

  cout << "Matrix is symmetric.";
 }
 else
 {

  cout << "Matrix is not symmetric.";
 }
 return 0;
}
