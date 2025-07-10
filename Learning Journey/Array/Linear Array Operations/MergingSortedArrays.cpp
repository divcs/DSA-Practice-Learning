#include <iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int arr1S, int arr2[], int arr2S, int arrM[])
{
 int i = 0;
 int j = 0;
 int k = 0;

 while (i < arr1S && j < arr2S)
 {
  if (arr1[i] < arr2[j])
  {
   arrM[k] = arr1[i];
   i++;
  }
  else
  {
   arrM[k] = arr2[j];
   j++;
  }
  k++;
 }

 // Copy remaining elements from arr1 (if any)
 while (i < arr1S)
 {
  arrM[k] = arr1[i];
  i++;
  k++;
 }

 // Copy remaining elements from arr2 (if any)
 while (j < arr2S)
 {
  arrM[k] = arr2[j];
  j++;
  k++;
 }
}

int main()
{
 int sizeA, sizeB, sizeM;

 // Array A
 cout << "Enter size of array A:";
 cin >> sizeA;
 int arrA[sizeA];

 cout << "Array elements of B: ";
 for (int i = 0; i < sizeA; i++)
 {
  cin >> arrA[i];
 }

 // Array B
 cout << "Enter size of array B:";
 cin >> sizeB;
 int arrB[sizeB];

 cout << "Array elements of B: ";
 for (int i = 0; i < sizeB; i++)
 {
  cin >> arrB[i];
 }

 // Array M
 sizeM = sizeA + sizeB;
 int arrM[sizeM];

 // Merging Operation
 // Merge the arrays
 mergeSortedArrays(arrA, sizeA, arrB, sizeB, arrM);

 // Print the merged array
 cout << "Merged Array: ";
 for (int i = 0; i < sizeM; i++)
 {
  cout << arrM[i] << " ";
 }
 cout << endl;
 return 0;
}