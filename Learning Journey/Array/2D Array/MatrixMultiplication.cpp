#include <iostream>
using namespace std;

int main()
{
 int rowsA, colsA, rowsB, colsB, rowsC, colsC;

 // Input dimensions of the matrix
 cout << "Enter rows A: ";
 cin >> rowsA;
 cout << "Enter cols A: ";
 cin >> colsA;

 int arrA[rowsA][colsA];

 // Input elements of the matrix
 cout << "Enter elements for A: \n";
 for (int i = 0; i < rowsA; i++)
 {
  for (int j = 0; j < colsA; j++)
  {
   cin >> arrA[i][j];
  }
 }
 // Input dimensions of the matrix
 cout << "Enter rows B: ";
 cin >> rowsB;
 cout << "Enter cols B: ";
 cin >> colsB;

 int arrB[rowsB][colsB];

 // Input elements of the matrix
 cout << "Enter elements of B: \n";
 for (int i = 0; i < rowsB; i++)
 {
  for (int j = 0; j < colsB; j++)
  {
   cin >> arrB[i][j];
  }
 }

 // Matrix C
 int arrC[rowsA][colsB] = {0};

 if (colsA != rowsB)
 {
  cout << "Matrix multiplication not possible!" << endl;
  return 1;
 }
 else
 {
  for (int i = 0; i < rowsA; i++)
  {
   for (int j = 0; j < colsB; j++)
   {
    for (int k = 0; k < colsA; k++)
    {
     arrC[i][j] = arrC[i][j] + arrA[i][k] * arrB[k][j];
    }
   }
  }
 }

 // Printing the Multiplication Matrix
 cout << "Multiplication Matrix: \n";
 for (int i = 0; i < rowsA; i++)
 {
  for (int j = 0; j < colsB; j++)
  {
   cout << arrC[i][j] << " ";
  }
  cout << "\n";
 }
 return 0;
}