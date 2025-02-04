#include <iostream>
using namespace std;

void findSaddlePoint(int matrix[][3], int rows, int cols)
{
 bool found = false;

 for (int i = 0; i < rows; i++)
 {
  int rowMin = matrix[i][0]; // Assume first element in row is minimum
  int colIndex = 0;          // Store column index of minimum element

  // Find the minimum element in the current row
  for (int j = 1; j < cols; j++)
  {
   if (matrix[i][j] < rowMin)
   {
    rowMin = matrix[i][j];
    colIndex = j;
   }
  }

  // Check if rowMin is the maximum in its column
  bool isSaddlePoint = true;
  for (int k = 0; k < rows; k++)
  {
   if (matrix[k][colIndex] > rowMin)
   {
    isSaddlePoint = false;
    break;
   }
  }

  // If saddle point found, print and set found flag
  if (isSaddlePoint)
  {
   cout << "Saddle Point: " << rowMin << " at position (" << i << ", " << colIndex << ")" << endl;
   found = true;
  }
 }

 if (!found)
 {
  cout << "No Saddle Point found." << endl;
 }
}

int main()
{
 int matrix[3][3] = {
     {4, 3, 6},
     {8, 5, 9},
     {7, 2, 1}};

 findSaddlePoint(matrix, 3, 3);

 return 0;
}
