#include <iostream>
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
 int sumAboveDiagonal = 0;
 int sumDiagonal = 0;
 int sumBelowDiagonal = 0;
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < cols; j++)
  {
   if (i < j)
   {
    sumAboveDiagonal += matrix[i][j];
   }
   else if (i == j)
   {
    sumDiagonal += matrix[i][j];
   }
   else if (i > j)
   {
    sumBelowDiagonal += matrix[i][j];
   }
  }
 }
 cout << "The sum above diagonal is: \n"
      << sumAboveDiagonal + sumDiagonal;
 cout << "The sum below diagonal is: " << sumBelowDiagonal + sumDiagonal;
 return 0;
}