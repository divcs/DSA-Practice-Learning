#include <iostream>
using namespace std;

int main()
{
 int rows, cols;

 // Input dimensions of the matrix
 cout << "Enter rows : ";
 cin >> rows;
 cout << "Enter cols : ";
 cin >> cols;

 int arrA[rows][cols];

 // Input elements of the matrix
 cout << "Enter elements for A: \n";
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   cin >> arrA[i][j];
  }
 }

 int arrB[rows][cols];

 // Input elements of the matrix
 cout << "Enter elements of B: \n";
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   cin >> arrB[i][j];
  }
 }

 // Matrix C
 int arrC[rows][cols];
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   arrC[i][j] = arrA[i][j] + arrB[i][j];
  }
 }

 cout << "Addition Matrix: ";
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   cout << arrC[i][j] << " ";
  }
  cout << "\n";
 }
 return 0;
}