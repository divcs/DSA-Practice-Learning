#include <iostream>
using namespace std;

int main()
{

 int rows, cols;
 cout << "Enter rows: ";
 cin >> rows;

 cout << "Enter cols: ";
 cin >> cols;

 int matrix[rows][cols];
 cout << "Enter elements of matrix: \n";
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   cin >> matrix[i][j];
  }
 }

 // Transpose
 if (rows == cols)
 {
  // Square Matrix
  int temp;
  for (int i = 0; i < rows; i++)
  {
   for (int j = i + 1; j < cols; j++)
   {
    temp = matrix[i][j];
    matrix[i][j] = matrix[j][i];
    matrix[j][i] = temp;
   }
  }

  // Printing matrix
  cout << "After transpose: \n";
  for (int i = 0; i < rows; i++)
  {
   for (int j = 0; j < cols; j++)
   {
    cout << matrix[i][j] << " ";
   }
   cout << "\n";
  }
 }
 else
 {
  // non-square matrix
  int matrixNS[cols][rows];
  for (int i = 0; i < rows; i++)
  {
   for (int j = 0; j < cols; j++)
   {

    matrixNS[j][i] = matrix[i][j];
   }
  }

  // Printing matrix
  cout << "After transpose: \n";
  for (int i = 0; i < cols; i++)
  {
   for (int j = 0; j < rows; j++)
   {
    cout << matrixNS[i][j] << " ";
   }
   cout << "\n";
  }
 }

 return 0;
}
